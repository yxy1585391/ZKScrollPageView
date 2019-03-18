//
//  ZKPageContentDelegate.h
//  Angelet
//
//  Created by 燕晓玉 on 2019/2/28.
//  Copyright © 2019 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ZKPageViewChildVcDelegate <NSObject>

@optional
/**
 *
 * 注意ZJScrollPageView不会保证viewWillAppear等生命周期方法一定会调用
 * 所以建议使用ZJScrollPageViewChildVcDelegate中的方法来替代对应的生命周期方法完成数据的加载
 */
- (void)zj_viewWillAppearForIndex:(NSInteger)index;
- (void)zj_viewDidAppearForIndex:(NSInteger)index;
- (void)zj_viewWillDisappearForIndex:(NSInteger)index;
- (void)zj_viewDidDisappearForIndex:(NSInteger)index;

@end

@protocol ZKScrollPageViewDelegate <NSObject>

- (NSInteger)numberOfChildViewControllers;

- (UIViewController<ZKPageViewChildVcDelegate> *)childViewController:(UIViewController<ZKPageViewChildVcDelegate> *)reuseViewController forIndex:(NSInteger)index;

@optional

//- (void)setUpTitleView:(ZJTitleView *)titleView forIndex:(NSInteger)index;

/**
 *  页面将要出现
 */
- (void)scrollPageController:(UIViewController *)scrollPageController childViewControllWillAppear:(UIViewController *)childViewController forIndex:(NSInteger)index;
/**
 *  页面已经出现
 */
- (void)scrollPageController:(UIViewController *)scrollPageController childViewControllDidAppear:(UIViewController *)childViewController forIndex:(NSInteger)index;

- (void)scrollPageController:(UIViewController *)scrollPageController childViewControllWillDisappear:(UIViewController *)childViewController forIndex:(NSInteger)index;
- (void)scrollPageController:(UIViewController *)scrollPageController childViewControllDidDisappear:(UIViewController *)childViewController forIndex:(NSInteger)index;

@end

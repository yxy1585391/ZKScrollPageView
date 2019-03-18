//
//  UIViewController+ZKPageController.h
//  Angelet
//
//  Created by 燕晓玉 on 2019/3/1.
//  Copyright © 2019 mac. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (ZKPageController)

/**
 *  所有子控制的父控制器, 方便在每个子控制页面直接获取到父控制器进行其他操作
 */
@property (nonatomic, weak, readonly) UIViewController *zj_scrollViewController;

@end

NS_ASSUME_NONNULL_END

//
//  ZKContentView.h
//  Angelet
//
//  Created by 燕晓玉 on 2019/2/25.
//  Copyright © 2019 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZKScrollPageViewDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface ZKContentView : UIView

@property (nonatomic, weak) id<ZKScrollPageViewDelegate>delegate;

@property (strong, nonatomic, readonly) UIScrollView *scrollView;

/**初始化方法
 */
- (instancetype)initWithFrame:(CGRect)frame parentViewController:(UIViewController *)parentViewController delegate:(id<ZKScrollPageViewDelegate>) delegate;

/** 给外界可以设置ContentOffSet的方法 */
- (void)setContentOffSet:(CGPoint)offset animated:(BOOL)animated;

/** 给外界 重新加载内容的方法 */
- (void)reload;

@end

NS_ASSUME_NONNULL_END

//
//  UIViewController+ZKPageController.m
//  Angelet
//
//  Created by 燕晓玉 on 2019/3/1.
//  Copyright © 2019 mac. All rights reserved.
//

#import "UIViewController+ZKPageController.h"
#import "ZKScrollPageViewDelegate.h"

@implementation UIViewController (ZKPageController)

//@dynamic zj_scrollViewController;
- (UIViewController *)zj_scrollViewController {
    UIViewController *controller = self;
    while (controller) {
        if ([controller conformsToProtocol:@protocol(ZKScrollPageViewDelegate)]) {
            break;
        }
        controller = controller.parentViewController;
    }
    return controller;
}

@end

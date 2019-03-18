//
//  ViewController.m
//  ZKScrollPageView
//
//  Created by 燕晓玉 on 2019/3/18.
//  Copyright © 2019 yxy. All rights reserved.
//

#import "ViewController.h"
#import "ZKScrollPageView/ZKContentView.h"
#import "FirstVC.h"
#import "SecondVC.h"

@interface ViewController ()<ZKScrollPageViewDelegate>

@property (nonatomic, strong) NSMutableArray *childVcs;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    _childVcs = [NSMutableArray array];
    
    FirstVC *vc1 = [[FirstVC alloc] init];
    [_childVcs addObject:vc1];
    
    SecondVC *vc2 = [[SecondVC alloc] init];
    [_childVcs addObject:vc2];
    
    ZKContentView *contentView = [[ZKContentView alloc] initWithFrame:CGRectMake(0, 100, self.view.bounds.size.width, self.view.bounds.size.height-100) parentViewController:self delegate:self];
    [self.view addSubview:contentView];
    
}

#pragma mark ZKScrollPageViewDelegate

- (NSInteger)numberOfChildViewControllers{
    return 2;
}

- (UIViewController<ZKPageViewChildVcDelegate> *)childViewController:(UIViewController<ZKPageViewChildVcDelegate> *)reuseViewController forIndex:(NSInteger)index{
    
    UIViewController<ZKPageViewChildVcDelegate> *childVc = reuseViewController;
    if (childVc == nil) {
        childVc = self.childVcs[index];
        if (index%2 == 0) {
            
        } else {
            
        }
    }
    return childVc;
    
}


@end

//
//  UINavigationController+twSize.h
//  TWTool_Example
//
//  Created by TW on 2021/3/11.
//  Copyright © 2021 tanwang11. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UINavigationController (twSize)

@property (nonatomic) int topMargin;// 隐藏导航栏的视图

@property (nonatomic) BOOL _initTopMargin; // 内部使用

@end

NS_ASSUME_NONNULL_END

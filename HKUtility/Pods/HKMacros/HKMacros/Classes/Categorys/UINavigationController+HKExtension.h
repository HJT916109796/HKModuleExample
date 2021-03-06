//
//  UINavigationController+HKExtension.h
//  HKProject
//
//  Created by 胡锦涛 on 2018/7/27.
//  Copyright © 2018年 胡锦涛. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationController (HKExtension)
/// The gesture recognizer that actually handles interactive pop.
@property (nonatomic, strong, readonly) UIPanGestureRecognizer *hk_popGestureRecognizer;

/// A view controller is able to control navigation bar's appearance by itself,
/// rather than a global way, checking "hk_preferNavBarHidden" property.
/// Default to YES, disable it if you don't want so.
@property (nonatomic, assign) BOOL hk_baseNavBarAppearanceEnabled;

///设置NavBar属性 {@"font":12,@"foregroundColor":[UIColor redColor]@"bgColor":[UIColor whiteColor]}
- (void)hk_setNavBar:(NSDictionary*)params;
@end

/// Allows any view controller to disable interactive pop gesture, which might
/// be necessary when the view controller itself handles pan gesture in some
/// cases.
@interface UIViewController (HKFullscreenPopGesture)

/// Whether the interactive pop gesture is disabled when contained in a navigation
/// Use this attribute in viewDidLoad once .
@property (nonatomic, assign) BOOL hk_interactivePopDisabled;

/// Indicate this view controller prefers its navigation bar hidden or not,
/// checked when view controller based navigation bar's appearance is enabled.
/// Default to NO, bars are more likely to show.
@property (nonatomic, assign) BOOL hk_preferNavBarHidden;

/// Max allowed initial distance to left edge when you begin the interactive pop
/// gesture. 0 by default, which means it will ignore this limit.
@property (nonatomic, assign) CGFloat hk_maxAllowedInitialDistanceToLeftEdge;
@end

//
//  MKButton.h
//  RCTMaterialKit
//
//  Created by Yingxin Wu on 15/6/7.
//  Copyright (c) 2015年 xinthink. All rights reserved.
//

#ifndef RCTMaterialKit_MKButton_h
#define RCTMaterialKit_MKButton_h

@import UIKit;
#import "MKLayer.h"

@interface MKButton : UIButton

@property BOOL maskEnabled;
@property MKRippleLocation rippleLocation;
@property NSString *rippleLocationByName;
@property float ripplePercent;
@property float backgroundLayerCornerRadius;
@property float cornerRadius;
@property BOOL shadowPathEnabled;  // avoid shadow under text when there's a translucent background

// animations
@property BOOL shadowAniEnabled;
@property BOOL backgroundAniEnabled;
@property float rippleAniDuration;
@property float backgroundAniDuration;
@property float shadowAniDuration;
@property MKTimingFunction *rippleAniTimingFunction;
@property NSString *rippleAniTimingFunctionByName;
@property MKTimingFunction *backgroundAniTimingFunction;
@property MKTimingFunction *shadowAniTimingFunction;

// color
@property UIColor *rippleLayerColor;
@property UIColor *backgroundLayerColor;

@end

#endif

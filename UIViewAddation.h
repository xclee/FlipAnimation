//
//  UIViewAddation.h
//  CoreAnimation
//
//  Created by Li xuechuan on 12-7-27.
//  Copyright (c) 2012年 SNDA. All rights reserved.
//

#import <UIKit/UIKit.h>


enum {
    
	KKUIViewAnimationOptionFromLeft     = 0,
	KKUIViewAnimationOptionFromRight      = 1 << 0
};
typedef NSUInteger KKUIViewAnimationOptions;


@interface UIView (AnimationAddition)

-(void)animateWithDuration:(NSTimeInterval)duration delay:(NSTimeInterval)delay options:(KKUIViewAnimationOptions)options animations:(void (^)(void))animations completion:(void (^)(BOOL finished))completion __OSX_AVAILABLE_STARTING(__MAC_NA,__IPHONE_4_0);

@end

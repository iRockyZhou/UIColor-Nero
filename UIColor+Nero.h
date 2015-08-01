//
//  UIColor+Nero.h
//  NeroCampusBulletinBoard
//
//  Created by 谭峻强 on 15/8/1.
//  Copyright (c) 2015年 TanJunqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define RGBA_COLOR(R, G, B, A) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:A]
#define RGB_COLOR(R, G, B) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:1.0f]

@interface UIColor (Nero)

+ (UIColor *)colorWithSixteenColorNumber:(NSString *)colorNum;

//从十六进制字符串获取颜色，
//color:支持@“#123456”、 @“0X123456”、 @“123456”三种格式
+ (UIColor *)colorWithSixteenColorNumber:(NSString *)colorNum alpha:(CGFloat)alpha;

@end

//
//  UIColor+Nero.h
//  NeroCampusBulletinBoard
//
//  Created by Nero on 15/8/1.
//  Copyright (c) 2015年 TanJunqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define RGBA_COLOR(R, G, B, A) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:A]
#define RGB_COLOR(R, G, B) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:1.0f]
#define ARC4RANDOM_MAX 0x100000000LL

@interface UIColor (Nero)

/**
 *  从十六进制字符串获取颜色
 *  colorNum:支持@“#123456”、 @“0X123456”、 @“123456”三种格式
 *
 *  @param colorNum 色号
 *
 *  @return Class: UIColor
 */
+ (UIColor *)colorWithSixteenColorNumber:(NSString *)colorNum;

// 从十六进制字符串获取颜色，

/**
 *  从十六进制字符串和不透明度获取颜色
 *  colorNum:支持@“#123456”、 @“0X123456”、 @“123456”三种格式
 *
 *  @param colorNum 色号
 *  @param alpha    不透明度
 *
 *  @return Class: UIColor
 */
+ (UIColor *)colorWithSixteenColorNumber:(NSString *)colorNum alpha:(CGFloat)alpha;

/**
 *  获得随机色
 *
 *  @return Class: UIColor
 */
+ (UIColor *) randomColor;

/**
 *  获得随机色(可透明)
 *
 *  @param alpha 不透明度
 *
 *  @return Class: UIColor
 */
+ (UIColor *) randomColorWithAlpha:(CGFloat)alpha;

@end

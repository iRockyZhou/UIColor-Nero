//
//  UIColor+Nero.m
//  NeroCampusBulletinBoard
//
//  Created by 谭峻强 on 15/8/1.
//  Copyright (c) 2015年 TanJunqiang. All rights reserved.
//

#import "UIColor+Nero.h"

@implementation UIColor (Nero)

/**
 *  解析十六位色号
 *
 *  @param colorNum 色号
 *  @param alpha    透明度
 *
 *  @return         原RGBa方法
 */
+ (UIColor *)colorWithSixteenColorNumber:(NSString *)colorNum alpha:(CGFloat)alpha
{
    // 删除字符串中的空格
    NSString *colorNumStr = [[colorNum stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]] uppercaseString];
    
    // 控制色号格式
    if (([colorNumStr length] < 6) || ([colorNumStr length] > 8))
    {
        return [UIColor clearColor];
    }
    
    // 如果是0x开头的，那么截取字符串，字符串从索引为2的位置开始，一直到末尾
    if ([colorNumStr hasPrefix:@"0X"])
    {
        colorNumStr = [colorNumStr substringFromIndex:2];
    }
    
    // 如果是#开头的，那么截取字符串，字符串从索引为1的位置开始，一直到末尾
    if ([colorNumStr hasPrefix:@"#"])
    {
        colorNumStr = [colorNumStr substringFromIndex:1];
    }
    
    // 如果整好是6位色号则直接向下计算
    
    // 解析R、G、B
    NSRange range;
    range.location = 0;
    range.length = 2;
    // R
    NSString *rString = [colorNumStr substringWithRange:range];
    // G
    range.location = 2;
    NSString *gString = [colorNumStr substringWithRange:range];
    // B
    range.location = 4;
    NSString *bString = [colorNumStr substringWithRange:range];
    
    // 解析十六进制
    unsigned int r, g, b;
    [[NSScanner scannerWithString:rString] scanHexInt:&r];
    [[NSScanner scannerWithString:gString] scanHexInt:&g];
    [[NSScanner scannerWithString:bString] scanHexInt:&b];
    return [UIColor colorWithRed:((float)r / 255.0f) green:((float)g / 255.0f) blue:((float)b / 255.0f) alpha:alpha];
}

// 若没有透明度参数，则默认alpha值为1
/**
 *  解析十六位色号
 *
 *  @param  colorNum    色号
 *
 *  @return             原RGBa方法
 */
+ (UIColor *)colorWithSixteenColorNumber:(NSString *)colorNum{
    return [self colorWithSixteenColorNumber:colorNum alpha:1.0f];
}

@end

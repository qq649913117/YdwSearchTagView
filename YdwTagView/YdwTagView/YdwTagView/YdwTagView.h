//
//  YdwTagView.h
//  ----------------------搜索用的标签View、----------------------
//  Created by ydw on 16/8/11.
//  Copyright © 2016年 ydw. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol YdwTagViewDelegate <NSObject>

-(void)YdwTagView:(UIView*)ydw fetchWordToTextFiled:(NSString *)KeyWord;;

@end

@interface YdwTagView : UIView<UIGestureRecognizerDelegate>
{
    CGRect previousFrame;
    NSInteger totalHeight;
}
@property (nonatomic, weak) id<YdwTagViewDelegate> delegate;
/**
 *  整个View的背景颜色
 */
@property (nonatomic, strong) UIColor *BigBGColor;
/**
 *  设置子标签View的单一颜色
 */
@property (nonatomic, strong) UIColor *singleTagColor;
/**
 *  标签文本数组的赋值
 */
-(void)setTagWithTagArray:(NSArray *)arr;

@end

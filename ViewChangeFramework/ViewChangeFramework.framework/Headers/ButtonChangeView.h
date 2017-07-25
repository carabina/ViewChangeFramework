//
//  ButtonChangeView.h
//  点击Button切换视图
//
//  Created by 张哈哈 on 2017/4/27.
//  Copyright © 2017年 Mr Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define defaultStag 666

@protocol ButtonChangeViewDelegate <NSObject>

@optional
- (void)buttonDidClicked:(NSInteger)buttonTag;

@end

@interface ButtonChangeView : UIView
/** 视图背景颜色*/
@property (strong, nonatomic) UIColor *backColor;

/** 底部线条颜色*/
@property (strong, nonatomic) UIColor *bottomLineColor;
/** 移动线条颜色*/
@property (strong, nonatomic) UIColor *moveLineColor;

/** button字体normal状态颜色*/
@property (strong, nonatomic) UIColor *textNormalColor;
/** button字体selected状态颜色*/
@property (strong, nonatomic) UIColor *textSelectColor;
/** button字体大小*/
@property (strong, nonatomic) UIFont *textFont;

@property (weak, nonatomic) id<ButtonChangeViewDelegate>delegate;

// 初始化
- (instancetype)initWithFrame:(CGRect)frame withTitles:(NSArray *)titles;
// 设置选中的button
- (void)btnClick:(UIButton *)sender;

@end

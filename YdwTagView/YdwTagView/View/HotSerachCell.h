//
//  HotSerachCell.h
//  XiaoKaPai
//
//  Created by ydw on 16/8/11.
//  Copyright © 2016年 ydw. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YdwTagView.h"

@interface HotSerachCell : UITableViewCell

/** 热门搜索tagView */
@property (nonatomic, strong) YdwTagView *ydwTagV;

/** 热门搜索标签的数据源数组 */
@property (nonatomic, strong) NSArray *hotSearchArr;

@end

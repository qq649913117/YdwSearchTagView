//
//  HistorySearchCell.h
//  XiaoKaPai
//
//  Created by ydw on 16/8/11.
//  Copyright © 2016年 ydw. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HistorySearchCell : UITableViewCell
/** 历史搜索标签名 */
@property (weak, nonatomic) IBOutlet UILabel *tagNameLab;
/** 删除标签Btn */
@property (weak, nonatomic) IBOutlet UIButton *removeTagBtn;

@end

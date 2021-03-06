//
//  FTZhongZhiTableViewCell.h
//  NetFarmCommune
//
//  Created by 123 on 2017/6/7.
//  Copyright © 2017年 NongYiNong. All rights reserved.
//  代种cell

#import <UIKit/UIKit.h>
#import "NYNCategoryPageModel.h"

@interface FTZhongZhiTableViewCell : UITableViewCell
@property (nonatomic,strong) UIImageView *imageV;
@property (nonatomic,strong) UILabel *titleLabel;
@property (nonatomic,strong) UILabel *addressLabel;
@property (nonatomic,strong) UILabel *kucun;
@property (nonatomic,strong) UILabel *pinglun;
@property (nonatomic,strong) UILabel *juli;
@property (nonatomic,strong) UILabel *unitPriceLabel;

@property (nonatomic,strong) NYNCategoryPageModel *model;

@property (nonatomic,strong) UIView *viewOne;
@property (nonatomic,strong) UIView *viewTwo;
@end

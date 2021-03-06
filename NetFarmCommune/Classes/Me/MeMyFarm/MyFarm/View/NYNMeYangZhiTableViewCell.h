//
//  NYNMeYangZhiTableViewCell.h
//  NetFarmCommune
//
//  Created by 123 on 2017/7/11.
//  Copyright © 2017年 NongYiNong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NYNMeFarmModel.h"

typedef void(^JinDuClickback)(NSIndexPath *indexPath);
typedef void(^DetelClickback)(NSIndexPath *indexPath);


@interface NYNMeYangZhiTableViewCell : UITableViewCell


@property (nonatomic,strong) NYNMeFarmModel *model;


@property (nonatomic,strong) UIImageView *nongChangImageView;
@property (nonatomic,strong) UILabel *nongChangLabel;
@property (nonatomic,strong) UIImageView *chanPinImageView;
@property (nonatomic,strong) UILabel *tuDiMianJiCountLabel;
@property (nonatomic,strong) UILabel *priceLabel;
@property (nonatomic,strong) UILabel *riqiLabel;
@property (nonatomic,strong) UILabel *zhuangTaiLabel;
@property (nonatomic,strong) UIButton *detelButton;

@property (nonatomic,strong) NSIndexPath *indexPath;

@property (nonatomic,copy) JinDuClickback jinDuClickback;
@property (nonatomic,copy) DetelClickback detelClickback;

@end

//
//  NYNCollectionNongChanPinViewController.m
//  NetFarmCommune
//
//  Created by 123 on 2017/7/18.
//  Copyright © 2017年 NongYiNong. All rights reserved.
//

#import "NYNCollectionNongChanPinViewController.h"
#import "NYNNongChangTableViewCell.h"

@interface NYNCollectionNongChanPinViewController ()<UITableViewDelegate,UITableViewDataSource>
@property (nonatomic,strong) UITableView *NongChanPinYangZhiTable;
@end

@implementation NYNCollectionNongChanPinViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    [self.view addSubview:self.NongChanPinYangZhiTable];
    self.NongChanPinYangZhiTable.delegate = self;
    self.NongChanPinYangZhiTable.dataSource = self;
    self.NongChanPinYangZhiTable.separatorStyle = UITableViewCellSeparatorStyleNone;
    self.NongChanPinYangZhiTable.showsVerticalScrollIndicator = NO;
    self.NongChanPinYangZhiTable.showsHorizontalScrollIndicator = NO;
}

-(NSInteger)numberOfSectionsInTableView:(UITableView *)tableView{
    return 1;
}

-(NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section{
    return 0;
}

-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{
        NYNNongChangTableViewCell *farmLiveTableViewCell = [tableView dequeueReusableCellWithIdentifier:@"activityCell"];
        if (farmLiveTableViewCell == nil) {
            farmLiveTableViewCell = [[NSBundle mainBundle] loadNibNamed:NSStringFromClass([NYNNongChangTableViewCell class]) owner:self options:nil].firstObject;
        }
        return farmLiveTableViewCell;
}

-(CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath{
    return JZHEIGHT(101);
}

-(UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section{
    UIView *v = [[UIView alloc]initWithFrame:CGRectMake(0, 0, SCREENWIDTH, JZHEIGHT(11))];
    v.backgroundColor = Colore3e3e3;
    return v;
}

-(CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section{
    return JZHEIGHT(11);
}

-(UIView *)tableView:(UITableView *)tableView viewForFooterInSection:(NSInteger)section{
    UIView *v = [[UIView alloc]initWithFrame:CGRectMake(0, 0, SCREENWIDTH, JZHEIGHT(0.0001))];
    v.backgroundColor = Colore3e3e3;
    return v;
}

-(CGFloat)tableView:(UITableView *)tableView heightForFooterInSection:(NSInteger)section{
    return JZHEIGHT(0.0001);
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(UITableView *)NongChanPinYangZhiTable{
    if (!_NongChanPinYangZhiTable) {
        _NongChanPinYangZhiTable = [[UITableView alloc]initWithFrame:CGRectMake(0, 0, SCREENWIDTH, SCREENHEIGHT - 44 - 64) style:UITableViewStylePlain];
    }
    return  _NongChanPinYangZhiTable;
}
@end

//
//  FCDailyAlarmCell.h
//  FitCloudDemo
//
//  Created by 远征 马 on 2017/5/31.
//  Copyright © 2017年 马远征. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FCDailyAlarmCell : UITableViewCell
@property (nonatomic, strong) UILabel *timeLabel;
@property (nonatomic, strong) UILabel *weekLabel;
@property (nonatomic, strong, readonly) UISwitch *stSwitch;
@property (nonatomic, copy) void(^didChangedSwicthValueBlock)(FCDailyAlarmCell *aCell);
@end

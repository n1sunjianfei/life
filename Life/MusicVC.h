//
//  MusicVC.h
//  Life
//
//  Created by 孙建飞 on 16/9/21.
//  Copyright © 2016年 sjf. All rights reserved.
//

#import "BaseVC.h"
#import "PlaylistVC.h"
#import "PlayView.h"
#import "PlayHistory.h"
@interface MusicVC : BaseVC<UISearchBarDelegate,UIAlertViewDelegate,PlayViewDelegate>
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UISearchBar *searchbar;
@property (weak, nonatomic) IBOutlet UIButton *cancelButton;

@property(nonatomic,strong) PlaylistVC *playlistVC;
@property(nonatomic,copy) NSArray *singgerArr;
@property(nonatomic,copy) NSArray *singgerIDArr;

@property(nonatomic,copy) NSArray *songListArr;
@property(nonatomic,copy) NSArray *colorsArr;

@end

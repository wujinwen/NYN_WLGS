//
//  NYNLiveRoomViewController.h
//  NetFarmCommune
//
//  Created by manager on 2017/10/11.
//  Copyright © 2017年 NongYiNong. All rights reserved.
//

#import "BaseViewController.h"
#import "RCDLiveMessageModel.h"
#import "NYNLiveRoomViewController.h"
#import <YfMediaPlayer/YfMediaPlayer.h>
#import "RCDLiveMessageModel.h"
#import "RCDLiveInputBar.h"
#import <YFMediaPlayerPushStreaming/YFMediaPlayerPushStreaming.h>

///输入栏扩展输入的唯一标示
#define PLUGIN_BOARD_ITEM_ALBUM_TAG    1001
#define PLUGIN_BOARD_ITEM_CAMERA_TAG   1002
#define PLUGIN_BOARD_ITEM_LOCATION_TAG 1003
#if RC_VOIP_ENABLE
#define PLUGIN_BOARD_ITEM_VOIP_TAG     1004
#endif

@interface NYNLiveRoomViewController : BaseViewController<UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, UIScrollViewDelegate>



@property (nonatomic, assign) YfTransportStyle transportStyle;
@property (nonatomic, assign) BOOL isVertical;

//农厂的farmId
@property (nonatomic, strong) NSString *farmId;

//播放另一个主播地址
@property (nonatomic, strong) YfFFMoviePlayerController *playerOne;
/*!
直播间Id
 */
@property(nonatomic, strong) NSString *liveID;

/**
 *  底部显示未读消息view
 */
@property (nonatomic, strong) UIView *unreadButtonView;
@property(nonatomic, strong) UILabel *unReadNewMessageLabel;

/**
 *  直播互动文字显示
 */
@property(nonatomic,strong) UIView *titleView ;

#pragma mark - 会话属性

/*!
 当前会话的会话类型
 */
@property(nonatomic) RCConversationType conversationType;

/*!
 目标会话ID
 */
@property(nonatomic, strong) NSString *targetId;

/*!
 屏幕方向
 */
@property(nonatomic, assign) BOOL isScreenVertical;

/*!
 播放内容地址
 */
@property(nonatomic, strong) NSString *urlString;
@property (nonatomic, assign) CGFloat kbps;
@property (nonatomic, assign) CGFloat fps;


#pragma mark - 会话页面属性

/*!
 聊天内容的消息Cell数据模型的数据源
 
 @discussion 数据源中存放的元素为消息Cell的数据模型，即RCDLiveMessageModel对象。
 */
@property(nonatomic, strong) NSMutableArray<RCDLiveMessageModel *> *conversationDataRepository;

/*!
 会话页面的CollectionView
 */
@property(nonatomic, strong) UICollectionView *conversationMessageCollectionView;

/*!
 消息列表CollectionView和输入框都在这个view里
 */
@property(nonatomic, strong) UIView *contentView;

#pragma mark - 输入工具栏

@property(nonatomic,strong) RCDLiveInputBar *inputBar;

#pragma mark - 显示设置
/*!
 设置进入聊天室需要获取的历史消息数量（仅在当前会话为聊天室时生效）
 
 @discussion 此属性需要在viewDidLoad之前进行设置。
 -1表示不获取任何历史消息，0表示不特殊设置而使用SDK默认的设置（默认为获取10条），0<messageCount<=50为具体获取的消息数量,最大值为50。
 */
@property(nonatomic, assign) int defaultHistoryMessageCountOfChatRoom;

@end


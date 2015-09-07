//
//  JKXMPPTool.h
//  ChatDemo
//
//  Created by Joker on 15/7/19.
//  Copyright (c) 2015年 Mac. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JSQMessage.h"
#import "BBMessageDelegate.h"
#import "RosterChangeDelegate.h"

@interface BBXMPPTool : NSObject<XMPPStreamDelegate,UIAlertViewDelegate,XMPPRosterDelegate,XMPPRosterMemoryStorageDelegate,XMPPIncomingFileTransferDelegate>

//接收信息委托
@property (nonatomic, retain)id messageDelegate;

@property (nonatomic, retain)id rosterChangeDelegate;

//头像
@property (nonatomic,strong) UIImage * avatarImage;

@property (nonatomic, strong) XMPPStream *xmppStream;

// 模块
@property (nonatomic, strong) XMPPAutoPing *xmppAutoPing;
@property (nonatomic, strong) XMPPReconnect *xmppReconnect;

@property (nonatomic, strong) XMPPRoster * xmppRoster;
@property (nonatomic, strong) XMPPRoster * xmppCoreDataRoster;
@property (nonatomic, strong) XMPPRosterMemoryStorage *xmppRosterMemoryStorage;

@property (nonatomic, strong) XMPPMessageArchiving *xmppMessageArchiving;
@property (nonatomic, strong) XMPPMessageArchivingCoreDataStorage *xmppMessageArchivingCoreDataStorage;

@property (nonatomic, strong) XMPPIncomingFileTransfer *xmppIncomingFileTransfer;

@property (nonatomic, assign) BOOL  xmppNeedRegister;
@property (nonatomic, copy)   NSString *myPassword;

@property (nonatomic, strong) XMPPPresence *receivePresence;

@property (nonatomic, strong, readonly) XMPPRosterCoreDataStorage *xmppRosterStorage;
@property (nonatomic, strong, readonly) XMPPvCardTempModule *xmppvCardTempModule;
@property (nonatomic, strong) XMPPvCardAvatarModule *xmppvCardAvatarModule;
@property (nonatomic, strong) XMPPvCardCoreDataStorage *xmppvCardStorage;

+ (instancetype)sharedInstance;
- (void)loginWithJID:(XMPPJID *)JID andPassword:(NSString *)password;
- (void)registerWithJID:(XMPPJID *)JID andPassword:(NSString *)password;

- (void)addFriend:(XMPPJID *)aJID;

@end

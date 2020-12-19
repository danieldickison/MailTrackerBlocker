//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"

@class MFMailbox, MFMessageStore, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

@interface UserNotificationCenterController : NSObject <NSUserNotificationCenterDelegate>
{
    NSMutableSet *_postUserNotificationOperations;	// 8 = 0x8
    NSMutableSet *_messagesSentBySelf;	// 16 = 0x10
    NSMutableSet *_forcedNotificationMessageIDs;	// 24 = 0x18
    NSMutableArray *_mostRecentMessageDates;	// 32 = 0x20
    NSMutableDictionary *_latestReadMessageForMailbox;	// 40 = 0x28
    NSMutableSet *_messagesNeedingSnippets;	// 48 = 0x30
    NSMutableArray *_mailboxesCurrentlySyncing;	// 56 = 0x38
    NSMutableSet *_userNotificationOperationsToSend;	// 64 = 0x40
    unsigned long long _numberOfMessagesWithSnippets;	// 72 = 0x48
    id _playSoundLock;	// 80 = 0x50
    id _accountsSyncingLock;	// 88 = 0x58
    BOOL _needToPlayNewMailSound;	// 96 = 0x60
    BOOL _allNewMessagesAreMuted;	// 97 = 0x61
    BOOL _accountsSyncing;	// 98 = 0x62
    long long _userNotificationScope;	// 104 = 0x68
    MFMessageStore *_userNotificationMailboxStore;	// 112 = 0x70
    NSOperationQueue *_operationQueue;	// 120 = 0x78
    unsigned long long _numberOfSnippetLines;	// 128 = 0x80
}

+ (id)sharedInstance;	// IMP=0x00000001000420d2
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001002aed59
+ (id)log;	// IMP=0x00000001002aea89
+ (id)notificationIdentifierForMessage:(id)arg1;	// IMP=0x00000001002ae9e0
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) MFMessageStore *userNotificationMailboxStore; // @synthesize userNotificationMailboxStore=_userNotificationMailboxStore;
@property(nonatomic) long long userNotificationScope; // @synthesize userNotificationScope=_userNotificationScope;
// - (void).cxx_destruct;	// IMP=0x00000001002b312b
- (void)_purgeStaleNotificationsBasedOnLastReadDateForMailboxIdentifiers:(id)arg1;	// IMP=0x00000001002b2d53
- (void)_updateLastReadMessagePerMailboxForMessages:(id)arg1;	// IMP=0x00000001002b29ae
- (void)_sendUserNotifications;	// IMP=0x00000001002b2708
- (void)_sendUserNotification:(id)arg1;	// IMP=0x00000001002b264c
- (void)_checkSynchronizationStatus;	// IMP=0x00000001002b25ac
- (void)_syncTaskFinishedForMailbox:(id)arg1;	// IMP=0x00000001002b2508
- (void)_syncTaskStartedForMailbox:(id)arg1;	// IMP=0x00000001002b2464
- (void)_mailboxDidEndSyncTask:(id)arg1;	// IMP=0x00000001002b23e8
- (void)_mailboxDidStartSyncTask:(id)arg1;	// IMP=0x00000001002b236c
- (BOOL)_shouldSendUserNotificationForMessage:(id)arg1 inMailbox:(id)arg2;	// IMP=0x0000000100062cfb
- (void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;	// IMP=0x00000001002b1c5e
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x00000001002b1675
- (BOOL)userNotificationCenter:(id)arg1 shouldActivateForNotification:(id)arg2;	// IMP=0x00000001002b1654
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;	// IMP=0x00000001002b159f
- (void)setUserNotificationScope:(long long)arg1 mailbox:(id)arg2;	// IMP=0x00000001002b140b
- (void)_deleteUserNotificationWithMessages:(id)arg1;	// IMP=0x00000001002b0c4d
- (void)_mailAccountsChanged:(id)arg1;	// IMP=0x00000001002b04a6
- (void)_messagesWereReadOrDeleted:(id)arg1;	// IMP=0x0000000100068609
- (void)_queueUserNotificationForMessages:(id)arg1 withSnippets:(id)arg2;	// IMP=0x00000001002b0107
- (void)_messageSnippetsUpdated:(id)arg1;	// IMP=0x0000000100068ebc
- (id)_snippetsForMessages:(id)arg1;	// IMP=0x00000001002afc0c
- (void)_ruleWasMatched:(id)arg1;	// IMP=0x00000001002af91e
- (BOOL)_isInMostRecentMessages:(id)arg1;	// IMP=0x00000001002af78d
- (void)_playNewMailSoundIfNeeded;	// IMP=0x00000001002af67f
- (void)_postNotificationIfNeededForMessages:(id)arg1;	// IMP=0x00000001002af204
- (void)_messagesWereAdded:(id)arg1;	// IMP=0x000000010004b7c1
- (void)_newMailReceived:(id)arg1;	// IMP=0x00000001002af1aa
- (void)_snippetLinePreferenceChanged:(id)arg1;	// IMP=0x00000001002af139
- (void)_setUserNotificationMailbox:(id)arg1;	// IMP=0x00000001002af071
@property(readonly, nonatomic) MFMailbox *userNotificationMailbox;
- (void)_mailboxWillBeInvalidated:(id)arg1;	// IMP=0x000000010007d836
- (void)_clearNotificationsForDeletedAccounts;	// IMP=0x000000010004288c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002aee13
- (void)dealloc;	// IMP=0x00000001002aeae7
- (id)init;	// IMP=0x000000010004223a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

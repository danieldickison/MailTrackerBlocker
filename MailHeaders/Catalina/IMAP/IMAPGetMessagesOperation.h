//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPPersistenceTaskOperation.h>

@class NSIndexSet;
@protocol IMAPGetMessagesOperationDelegate;

@interface IMAPGetMessagesOperation : IMAPPersistenceTaskOperation
{
    NSIndexSet *_uids;	// 8 = 0x8
    id <IMAPGetMessagesOperationDelegate> _delegate;	// 16 = 0x10
}

@property(readonly, nonatomic) __weak id <IMAPGetMessagesOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSIndexSet *uids; // @synthesize uids=_uids;
- (void).cxx_destruct;	// IMP=0x00000000000324a6
- (void)main;	// IMP=0x00000000000322cd
- (id)description;	// IMP=0x0000000000032211
- (id)initWithUIDs:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000032142

@end


//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAP/IMAPUIDCommand.h>

@class NSArray;

@interface IMAPUIDStoreCommand : IMAPUIDCommand
{
    NSArray *_flagsOrGmailLabels;	// 40 = 0x28
    BOOL _add;	// 48 = 0x30
    BOOL _forGmailLabels;	// 49 = 0x31
}

@property(readonly) BOOL forGmailLabels; // @synthesize forGmailLabels=_forGmailLabels;
@property BOOL add; // @synthesize add=_add;
- (void).cxx_destruct;	// IMP=0x0000000000069a6e
- (BOOL)executeOnConnection:(id)arg1;	// IMP=0x0000000000069a1d
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;	// IMP=0x0000000000069841
@property(readonly, copy) NSArray *gmailLabels;
@property(readonly, copy) NSArray *serverFlags;
- (id)activityString;	// IMP=0x000000000006976c
- (id)commandTypeString;	// IMP=0x000000000006974d
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2;	// IMP=0x000000000006967e
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2;	// IMP=0x00000000000695af
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2 add:(BOOL)arg3 gmailLabels:(id)arg4;	// IMP=0x0000000000069505
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 add:(BOOL)arg3 gmailLabels:(id)arg4;	// IMP=0x0000000000069450
- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2 add:(BOOL)arg3 flags:(id)arg4;	// IMP=0x00000000000693a9
- (id)initWithMailboxName:(id)arg1 UIDs:(id)arg2 add:(BOOL)arg3 flags:(id)arg4;	// IMP=0x00000000000692f7
- (void)_imapClientUIDStoreCommonInitForGmailLabels:(BOOL)arg1 add:(BOOL)arg2 flagsOrGmailLabels:(id)arg3;	// IMP=0x00000000000692af

@end


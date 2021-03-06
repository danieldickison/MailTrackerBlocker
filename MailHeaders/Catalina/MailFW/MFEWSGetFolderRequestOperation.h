//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSRequestOperation.h>

@class MFEWSGetFolderResponseOperation, NSArray;

@interface MFEWSGetFolderRequestOperation : MFEWSRequestOperation
{
    NSArray *_EWSFolderIds;	// 8 = 0x8
    NSArray *_additionalProperties;	// 16 = 0x10
}

@property(readonly, copy, nonatomic) NSArray *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(readonly, copy, nonatomic) NSArray *EWSFolderIds; // @synthesize EWSFolderIds=_EWSFolderIds;
// - (void).cxx_destruct;	// IMP=0x000000000008636a
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x00000000000862d8
@property(retain, nonatomic) MFEWSGetFolderResponseOperation *responseOperation;
- (id)prepareRequest;	// IMP=0x0000000000085e3e
- (BOOL)isFolderRequest;	// IMP=0x0000000000085e33
- (id)activityString;	// IMP=0x0000000000085dc6
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x0000000000085cf7
- (id)initWithEWSFolderIds:(id)arg1 additionalProperties:(id)arg2 gateway:(id)arg3 errorHandler:(id)arg4;	// IMP=0x0000000000085c0b

@end


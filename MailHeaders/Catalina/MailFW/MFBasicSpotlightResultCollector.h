//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/MFSpotlightResultCollector-Protocol.h>

@class MFMessageCriterion, NSArray, NSString;
@protocol MFMessageConsumer;

@interface MFBasicSpotlightResultCollector : NSObject <MFSpotlightResultCollector>
{
    struct __MDQuery *_query;	// 8 = 0x8
    BOOL _queryIsCancelled;	// 16 = 0x10
    BOOL _checkWhereFromsPaths;	// 17 = 0x11
    BOOL _async;	// 18 = 0x12
    unsigned int _options;	// 20 = 0x14
    id <MFMessageConsumer> _target;	// 24 = 0x18
    NSArray *_excludedMailboxURLs;	// 32 = 0x20
    MFMessageCriterion *_criterion;	// 40 = 0x28
    NSString *_expression;	// 48 = 0x30
    double _queryStartTime;	// 56 = 0x38
    unsigned long long _totalResultsCount;	// 64 = 0x40
    double _firstCallbackTime;	// 72 = 0x48
    unsigned long long _resultLimit;	// 80 = 0x50
    double _timeSpentInCallback;	// 88 = 0x58
    long long _nextIndexToProcess;	// 96 = 0x60
}

@property(nonatomic) long long nextIndexToProcess; // @synthesize nextIndexToProcess=_nextIndexToProcess;
@property(nonatomic) double timeSpentInCallback; // @synthesize timeSpentInCallback=_timeSpentInCallback;
@property(nonatomic) BOOL async; // @synthesize async=_async;
@property(nonatomic) unsigned long long resultLimit; // @synthesize resultLimit=_resultLimit;
@property(nonatomic) double firstCallbackTime; // @synthesize firstCallbackTime=_firstCallbackTime;
@property(nonatomic) unsigned long long totalResultsCount; // @synthesize totalResultsCount=_totalResultsCount;
@property(nonatomic) double queryStartTime; // @synthesize queryStartTime=_queryStartTime;
@property(copy, nonatomic) NSString *expression; // @synthesize expression=_expression;
@property(retain, nonatomic) MFMessageCriterion *criterion; // @synthesize criterion=_criterion;
@property(retain, nonatomic) NSArray *excludedMailboxURLs; // @synthesize excludedMailboxURLs=_excludedMailboxURLs;
@property(nonatomic) BOOL checkWhereFromsPaths; // @synthesize checkWhereFromsPaths=_checkWhereFromsPaths;
@property(nonatomic) BOOL queryIsCancelled; // @synthesize queryIsCancelled=_queryIsCancelled;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) id <MFMessageConsumer> target; // @synthesize target=_target;
// - (void).cxx_destruct;	// IMP=0x000000000002af5d
- (void)cancelQuery;	// IMP=0x000000000002ae0e
- (void)receivedSpotlightCallback:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000029aa8
- (void)dealloc;	// IMP=0x00000000000299e9
- (id)initWithCriterion:(id)arg1 target:(id)arg2 query:(struct __MDQuery *)arg3 expression:(id)arg4;	// IMP=0x0000000000029905
- (id)init;	// IMP=0x0000000000029836

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


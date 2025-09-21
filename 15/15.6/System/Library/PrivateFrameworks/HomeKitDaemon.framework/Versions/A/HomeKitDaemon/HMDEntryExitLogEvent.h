@class NSString, NSDictionary, NSUUID;

@interface HMDEntryExitLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (readonly) char isEntry;
@property (readonly) char isExit;
@property (readonly) char isFalse;
@property (readonly) char isInitial;
@property (readonly) double secondsLastFired;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exitLogEvent:(double)a0 isFalse:(char)a1 isInitial:(char)a2;
+ (id)entryLogEvent:(double)a0 isFalse:(char)a1 isInitial:(char)a2;

- (id)initWithReason:(unsigned long long)a0 isFalse:(char)a1 lastFired:(double)a2 isInitial:(char)a3;

@end

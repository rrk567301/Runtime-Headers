@class NSString, NSDictionary;

@interface HMDProcessMemoryPressureNotificationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *processMemoryState;
@property (readonly, nonatomic) NSString *dataSyncState;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createEventWithProcessMemoryState:(id)a0 dataSyncState:(id)a1;

- (void).cxx_destruct;
- (id)initWithProcessMemoryState:(id)a0 dataSyncState:(id)a1;

@end

@class NSString, NSDictionary;

@interface HMDProcessMemoryPressureNotificationLogEvent : HMMLogEvent <HMDAWDLogEvent, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *processMemoryState;
@property (readonly, nonatomic) NSString *dataSyncState;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;

+ (id)createEventWithProcessMemoryState:(id)a0 dataSyncState:(id)a1;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;
- (id)initWithProcessMemoryState:(id)a0 dataSyncState:(id)a1;

@end

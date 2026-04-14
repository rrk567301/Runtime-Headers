@class NSDictionary, NSString;

@interface HMDErrorAggregationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSDictionary *coreAnalyticsSerializedEvent;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;

+ (id)createSummaryEventForRequestGroup:(id)a0 totalErrorCount:(id)a1 totalEventCount:(id)a2;
+ (id)createErrorEventForRequestGroup:(id)a0 errorString:(id)a1 errorCount:(id)a2;

@end

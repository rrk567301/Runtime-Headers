@class NSString, NSDictionary;

@interface HMDHouseholdDataLogEvent : HMMLogEvent <HMDMetricsSerializable, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property unsigned long long requestCount;
@property unsigned long long activeDeviceCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

+ (id)coalescedEventFromHouseholdDataLogEvents:(id)a0;

- (id)initWithDictionary:(id)a0;
- (id)serializedMetric;

@end

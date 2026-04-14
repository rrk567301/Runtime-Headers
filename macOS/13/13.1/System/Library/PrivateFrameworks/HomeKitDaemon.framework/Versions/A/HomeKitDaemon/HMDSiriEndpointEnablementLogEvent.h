@class NSString, NSDictionary;

@interface HMDSiriEndpointEnablementLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) unsigned long long numCapableSiriEndpointAccessories;
@property (readonly, nonatomic) unsigned long long numEnabledSiriEndpointAccessories;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;

+ (id)logCategory;

- (id)initWithDictionary:(id)a0;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;
- (id)serializedMetric;
- (id)initWithConfigurationDataSource:(id)a0;
- (id)initWithHomeUUID:(id)a0 numCapableSiriEndpoints:(unsigned long long)a1 numEnabledSiriEndpoints:(unsigned long long)a2;

@end

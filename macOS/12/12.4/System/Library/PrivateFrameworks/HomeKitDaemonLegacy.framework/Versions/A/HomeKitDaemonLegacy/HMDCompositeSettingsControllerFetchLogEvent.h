@class NSString, NSDictionary;

@interface HMDCompositeSettingsControllerFetchLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *keyPath;


- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithKeyPath:(id)a0 date:(id)a1;

@end

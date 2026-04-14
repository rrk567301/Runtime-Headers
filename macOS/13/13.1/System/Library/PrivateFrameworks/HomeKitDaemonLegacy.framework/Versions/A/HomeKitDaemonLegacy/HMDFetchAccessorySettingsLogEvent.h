@class NSArray, NSString, NSDictionary;

@interface HMDFetchAccessorySettingsLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (copy, nonatomic) NSArray *failedKeyPaths;
@property (copy, nonatomic) NSArray *succeededKeyPaths;
@property (nonatomic) unsigned long long responseTimeStamp;
@property (readonly, copy, nonatomic) NSArray *keyPaths;
@property (readonly, nonatomic) unsigned long long startTimeStamp;
@property (readonly, copy, nonatomic) NSString *requestingClientName;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

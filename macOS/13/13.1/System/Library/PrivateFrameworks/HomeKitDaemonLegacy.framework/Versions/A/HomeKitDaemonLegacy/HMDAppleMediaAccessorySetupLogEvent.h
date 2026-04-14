@class NSString, NSDictionary, NSError, NSNumber;

@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy) NSNumber *role;
@property (readonly) unsigned long long setupStartTime;
@property (readonly) unsigned long long setupEndTime;
@property (readonly) unsigned long long accessoryAddEndTime;
@property (readonly) unsigned long long configurationEndTime;
@property (readonly, copy) NSError *setupSessionError;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSNumber *retryCount;
@property (readonly) unsigned long long firstSettingTime;
@property (readonly) unsigned long long languageSettingTime;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

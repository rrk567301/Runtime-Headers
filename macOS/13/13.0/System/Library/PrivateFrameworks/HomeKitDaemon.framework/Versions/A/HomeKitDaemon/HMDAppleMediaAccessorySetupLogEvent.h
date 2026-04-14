@class NSString, NSDictionary, NSDate, NSNumber, NSError;

@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, copy) NSNumber *role;
@property (readonly, copy) NSDate *setupStartTime;
@property (readonly, copy) NSDate *setupEndTime;
@property (readonly, copy) NSDate *configurationEndTime;
@property (readonly, copy) NSError *setupSessionError;
@property (readonly, copy) NSString *category;
@property (readonly, copy) NSNumber *retryCount;
@property (readonly) NSDate *firstSettingTime;
@property (readonly) NSDate *languageSettingTime;


@end

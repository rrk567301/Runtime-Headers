@class NSString, NSDictionary;

@interface HMDDoorLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy, nonatomic) NSString *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *doorStatus;
@property (readonly, copy, nonatomic) NSString *characteristicUUID;
@property (readonly, copy, nonatomic) NSString *timeStamp;
@property (readonly, copy, nonatomic) NSString *homePresence;
@property (readonly, copy, nonatomic) NSString *triggerSource;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *userUUID;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

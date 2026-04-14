@class NSString, NSDictionary;

@interface HMDAccessoryActivityTypeTemperatureSensorLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy, nonatomic) NSString *characteristicValue;
@property (readonly, copy, nonatomic) NSString *accessoryUUIDString;
@property (readonly, copy, nonatomic) NSString *serviceUUIDString;
@property (readonly, copy, nonatomic) NSString *characteristicUUIDString;
@property (readonly, copy, nonatomic) NSString *timeStamp;
@property (readonly, copy, nonatomic) NSString *regionRange;
@property (readonly, copy, nonatomic) NSString *homePresence;
@property (readonly, copy, nonatomic) NSString *subscriptionEventTypeString;
@property (readonly, copy, nonatomic) NSString *triggerSource;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *userUUID;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

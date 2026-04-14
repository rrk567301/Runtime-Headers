@class NSString, NSDictionary;

@interface HMDLightBrightnessLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly, copy, nonatomic) NSString *accessoryUUID;
@property (readonly, copy, nonatomic) NSString *brightness;
@property (readonly, copy, nonatomic) NSString *characteristicUUID;
@property (readonly, copy, nonatomic) NSString *timeStamp;
@property (readonly, copy, nonatomic) NSString *eventOrder;
@property (readonly, copy, nonatomic) NSString *sunRiseTime;
@property (readonly, copy, nonatomic) NSString *sunSetTime;
@property (readonly, copy, nonatomic) NSString *homePresence;
@property (readonly, copy, nonatomic) NSString *luxLevel;
@property (readonly, copy, nonatomic) NSString *regionRange;
@property (readonly, copy, nonatomic) NSString *triggerSource;
@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *userUUID;


@end

@class NSString, NSDictionary;

@interface HMDFamiliarFacesBulletinLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) long long numberOfKnownPersons;
@property (readonly) long long numberOfUnknownPersons;
@property (readonly, copy) NSString *bulletinReason;
@property (readonly) BOOL doorbellPressed;
@property (readonly) double secondsFromDoorbellToFaceClassification;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

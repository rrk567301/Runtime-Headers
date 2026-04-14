@class NSString, NSDictionary, HMDAccessoryVersion;

@interface HMDCameraRecordingReachabilityLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) BOOL reachable;
@property (readonly) BOOL didCreateEventModel;
@property (readonly) unsigned long long reachabilityChangeDebounceCount;
@property (readonly) double offlineDuration;
@property (readonly) HMDAccessoryVersion *firmwareVersion;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;


@end

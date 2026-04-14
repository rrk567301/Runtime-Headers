@class NSNumber, NSString, NSDictionary;

@interface HMDCameraRecordingLoadBalancerLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly, copy) NSNumber *numberOfResidents;
@property (readonly, copy) NSNumber *numberOfRetries;
@property (readonly, copy) NSNumber *totalNumberOfJobSlots;
@property (readonly, copy) NSNumber *remainingNumberOfJobSlots;
@property (readonly, copy) NSString *selectedResidentDeviceType;
@property (readonly, copy) NSNumber *selectedResidentSystemResourceUsageLevel;
@property (readonly, copy) NSNumber *selectedResidentNumberOfActiveStreams;
@property (readonly, copy) NSNumber *selectedResidentJobSlots;
@property (readonly, copy) NSNumber *selectedResidentPartialJobSlots;
@property (readonly) BOOL selectedResidentHasActiveSessionWithCamera;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;


@end

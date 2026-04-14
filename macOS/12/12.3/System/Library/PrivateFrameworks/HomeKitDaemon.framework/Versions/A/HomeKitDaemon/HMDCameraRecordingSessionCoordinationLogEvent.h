@class NSString, NSDictionary;

@interface HMDCameraRecordingSessionCoordinationLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (getter=isUsingRemoteDeviceAnalysisNode) BOOL usingRemoteDeviceAnalysisNode;
@property unsigned long long retryCount;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;



@end

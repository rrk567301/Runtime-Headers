@class NSString, NSDictionary;

@interface HMDCameraRecordingBulkSessionEndLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;


- (void).cxx_destruct;
- (id)initWithAccessoryIdentifier:(id)a0;

@end

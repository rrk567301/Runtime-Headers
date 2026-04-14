@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent <HMMCoreAnalyticsLogging>

@property (retain, nonatomic) NSNumber *referenceTimestamp;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_addInitialConfigurationMetricsToEvent:(id)a0;
- (void)_addStreamStartToFirstFrameDurationFromMilestones:(id)a0 toEvent:(id)a1;
- (id)initWithSessionInfo:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2 isRelayed:(BOOL)a3;

@end

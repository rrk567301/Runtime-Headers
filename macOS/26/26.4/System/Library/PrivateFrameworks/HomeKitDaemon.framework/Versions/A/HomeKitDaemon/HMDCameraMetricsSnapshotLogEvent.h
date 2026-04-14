@class NSString, NSDictionary, NSUUID, NSNumber;

@interface HMDCameraMetricsSnapshotLogEvent : HMDCameraMetricsLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) BOOL snapshotForNotification;
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
- (id)initWithSessionInfo:(id)a0 cameraAccessory:(id)a1 isLocal:(BOOL)a2 isRelayed:(BOOL)a3 snapshotForNotification:(BOOL)a4;

@end

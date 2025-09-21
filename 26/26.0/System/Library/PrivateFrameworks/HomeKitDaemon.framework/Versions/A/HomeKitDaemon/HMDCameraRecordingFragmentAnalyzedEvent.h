@class NSUUID, NSString, NSDictionary;

@interface HMDCameraRecordingFragmentAnalyzedEvent : HMDCameraRecordingLogEvent <HMMCoreAnalyticsLogging>

@property BOOL isSuccess;
@property (retain) NSUUID *clipModelID;
@property int recordingReason;
@property (getter=isMotionActive) BOOL motionActive;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 cameraID:(id)a1 sequenceNumber:(unsigned long long)a2;

@end

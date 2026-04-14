@class NSUUID, NSDictionary, HMDCameraRecordingSessionTimelineManager;

@interface HomeKitDaemon.HMDCameraRecordingRemoteSession : NSObject <HMDCameraFragmentHandling> {
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ logIdentifier;
    void /* unknown type, empty encoding */ identifier;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) double configuredFragmentDuration;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) NSDictionary *stateDump;
@property (nonatomic, readonly) HMDCameraRecordingSessionTimelineManager *timelineManager;

- (void)configure;
- (void).cxx_destruct;
- (id)init;
- (void)handleFragment:(id)a0;
- (void)handleMotionActive:(BOOL)a0;
- (void)handleNoMoreFragmentsAvailableWithError:(id)a0;

@end

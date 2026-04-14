@interface HomeKitDaemon.CameraRecordingLoadBalancerErrorResultTracker : _TtCs12_SwiftObject <HMDCameraRecordingLoadBalancerErrorResultTracker> {
    void /* unknown type, empty encoding */ errorResult;
    void /* unknown type, empty encoding */ demotionTimeInterval;
    void /* unknown type, empty encoding */ probationTimeInterval;
    void /* unknown type, empty encoding */ demotionEndDate;
    void /* unknown type, empty encoding */ probationEndDate;
}

@property (nonatomic, readonly) BOOL demoted;

- (BOOL)isDemoted;
- (void)processErrorResult:(id)a0;

@end

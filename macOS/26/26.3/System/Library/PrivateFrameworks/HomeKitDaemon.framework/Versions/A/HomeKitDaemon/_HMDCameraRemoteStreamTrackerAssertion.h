@class HMDCameraStreamSessionInfo, HMDCameraRemoteStreamTracker;

@interface _HMDCameraRemoteStreamTrackerAssertion : HMFObject

@property (weak) HMDCameraRemoteStreamTracker *streamTracker;
@property (readonly) HMDCameraStreamSessionInfo *streamSessionInfo;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStreamTracker:(id)a0 streamIdentifier:(id)a1;

@end

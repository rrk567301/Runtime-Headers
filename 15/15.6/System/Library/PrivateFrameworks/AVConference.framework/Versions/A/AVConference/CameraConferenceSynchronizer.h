@class VCVideoRule;

@interface CameraConferenceSynchronizer : NSObject {
    char isConference720p;
    char isConferenceOniPad;
    char receivedRequestToChangeCamera;
    char receivedFirstRemoteFrame;
    int cameraHasChangedToCapture;
    int didSendFirstRemoteFrameNotification;
    VCVideoRule *captureRule;
    id /* block */ remoteFrameNotificationBlock;
    id /* block */ didStopNotificationBlock;
}

@property (nonatomic, setter=setLocalPortraitAspectRatio:) struct CGSize { double width; double height; } localPortraitAspectRatio;

- (void)dealloc;
- (id)init;
- (void)reset;
- (void)cameraSizeChangedTo:(struct CGSize { double x0; double x1; })a0;
- (void)changeCameraToCaptureSettings:(double)a0 forced:(char)a1;
- (void)notifyClientOfRemoteFrame:(double)a0;
- (void)scheduleCameraChangeToCaptureSettings:(id)a0;
- (void)scheduleCameraChangeToPreviewSettings;
- (void)scheduleFirstRemoteFrameNotification:(id /* block */)a0;
- (char)shouldConferenceChangeCameraToCaptureSettings;
- (char)shouldConferenceChangeCameraToPreviewSettings;
- (char)shouldConferenceSendFirstRemoteFrameNotification;

@end

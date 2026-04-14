@class VCVideoRule;

@interface CameraConferenceSynchronizer : NSObject {
    BOOL isConference720p;
    BOOL isConferenceOniPad;
    BOOL receivedRequestToChangeCamera;
    BOOL receivedFirstRemoteFrame;
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
- (BOOL)shouldConferenceChangeCameraToCaptureSettings;
- (BOOL)shouldConferenceSendFirstRemoteFrameNotification;
- (BOOL)shouldConferenceChangeCameraToPreviewSettings;
- (void)changeCameraToCaptureSettings:(double)a0 forced:(BOOL)a1;
- (void)notifyClientOfRemoteFrame:(double)a0;
- (void)cameraSizeChangedTo:(struct CGSize { double x0; double x1; })a0;
- (void)scheduleFirstRemoteFrameNotification:(id /* block */)a0;
- (void)scheduleCameraChangeToPreviewSettings;
- (void)scheduleCameraChangeToCaptureSettings:(id)a0;

@end

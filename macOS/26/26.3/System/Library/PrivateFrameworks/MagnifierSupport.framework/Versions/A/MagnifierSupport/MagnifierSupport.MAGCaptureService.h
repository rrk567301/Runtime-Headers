@interface MagnifierSupport.MAGCaptureService : NSObject <AVCapturePhotoCaptureDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ dataOutputQueue;
    void /* unknown type, empty encoding */ captureSessionQueue;
    void /* unknown type, empty encoding */ subscribers;
    void /* unknown type, empty encoding */ captureSessionRuntimeErrorSubscription;
    void /* unknown type, empty encoding */ isCapturingPhoto;
    void /* unknown type, empty encoding */ isConfiguringSession;
    void /* unknown type, empty encoding */ isCaptureStayingLive;
    void /* unknown type, empty encoding */ captureSession;
    void /* unknown type, empty encoding */ cameraPhotoOutput;
    void /* unknown type, empty encoding */ cameraVideoDataOutput;
    void /* unknown type, empty encoding */ cameraDeviceInput;
    void /* unknown type, empty encoding */ _availableCaptureDevices;
    void /* unknown type, empty encoding */ _captureDevice;
    void /* unknown type, empty encoding */ internalCaptureDevice;
    void /* unknown type, empty encoding */ captureDeviceID;
    void /* unknown type, empty encoding */ virtualDeviceSwitchOverVideoZoomFactors;
    void /* unknown type, empty encoding */ videoDeviceRotationCoordinator;
    void /* unknown type, empty encoding */ cameraVideoPreviewLayer;
    void /* unknown type, empty encoding */ cameraVideoPortalSourceLayer;
    void /* unknown type, empty encoding */ sidebarPortalLayer;
    void /* unknown type, empty encoding */ primaryPortalLayer;
    void /* unknown type, empty encoding */ filterPortalLayers;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ preferredCameraObserver;
    void /* unknown type, empty encoding */ _isAutomaticCameraSelectionEnabled;
}

- (id)init;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didCapturePhotoForResolvedSettings:(id)a1;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)captureOutput:(id)a0 willBeginCaptureForResolvedSettings:(id)a1;
- (void)sessionInterruptionEndedWithNotification:(id)a0;
- (void)sessionRuntimeErrorWithNotification:(id)a0;
- (void)sessionWasInterruptedWithNotification:(id)a0;
- (void)wasConnectedNotificationWithNotification:(id)a0;
- (void)wasDisconnectedNotificationWithNotification:(id)a0;

@end

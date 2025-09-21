@interface AVCaptureMultiCamSession : AVCaptureSession {
    float _hardwareCost;
    float _systemPressureCost;
}

@property (class, readonly, nonatomic, getter=isMultiCamSupported) char multiCamSupported;

@property (readonly, nonatomic) float hardwareCost;
@property (readonly, nonatomic) float systemPressureCost;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)_addConnection:(id)a0 exceptionReason:(id *)a1;
- (char)_canAddConnection:(id)a0 failureReason:(id *)a1;
- (char)_canAddInput:(id)a0 failureReason:(id *)a1;
- (char)_canAddOutput:(id)a0 failureReason:(id *)a1;
- (void)_removeConnection:(id)a0;
- (char)canSetSessionPreset:(id)a0;
- (void)handleVideoInputDevice:(id)a0 activeFormatChanged:(id)a1;
- (void)startRunning;

@end

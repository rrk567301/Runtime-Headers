@interface IKPictureTakerView : IKImageCropView {
    void *_ikReserved;
}

- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)resetCursorRects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)cropElementDidLiveUpdate:(id)a0;
- (void)IKDVGrabberUpdated:(id)a0;
- (BOOL)isLiveCapturing;
- (void)irisOpened:(id)a0;
- (void)irisClosed:(id)a0;
- (void)cameraIsGone:(id)a0;
- (BOOL)isIrisClosed;
- (void)startListeningForCameraEvents;
- (void)stopLiveCapture;
- (void)stopListeningForCameraEvents;
- (void)setDisableCountDown:(BOOL)a0;
- (void)takePicture;
- (BOOL)isTakingPicture;
- (BOOL)startLiveCapture;
- (void)setDisableFlash:(BOOL)a0;
- (void)setCountdownDelegate:(id)a0;
- (void)pickerViewCommonInit;
- (void)disposeAudio;
- (void)cameraPictureNotification:(id)a0;
- (BOOL)isRoomWellLit;
- (void)stopSequenceGrabber;
- (void)directTakePicture;
- (void)scheduleCameraPictureNotificationAfterDelay:(double)a0;
- (short)setupAudio;
- (BOOL)startSequenceGrabber;
- (void)fireNextCameraSequence;
- (BOOL)__isRoomWellLit:(char *)a0 size:(struct CGSize { double x0; double x1; })a1 bpr:(int)a2 skipFirstComponent:(BOOL)a3 spp:(int)a4;
- (void)abortTakePicture;
- (id)cameraOffImage;
- (id)cameraNotConnectedText;
- (id)cameraOffText;
- (void)drawIrisClosedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_finalizeDirectTakePicture;
- (void)drawPositioningCircle;
- (void)setFlashRiseTime:(float)a0;
- (void)setFlashSustainTime:(float)a0;
- (void)setFlashFallTime:(float)a0;
- (void)setFlashSaturation:(float)a0;
- (void)setFlashColor:(id)a0;
- (void)setCameraCaptureDelay:(float)a0;

@end

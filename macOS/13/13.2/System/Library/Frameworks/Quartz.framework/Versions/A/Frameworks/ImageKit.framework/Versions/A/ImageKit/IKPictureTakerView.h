@interface IKPictureTakerView : IKImageCropView {
    void *_ikReserved;
}

- (void)dealloc;
- (void)finalize;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetCursorRects;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)cropElementDidLiveUpdate:(id)a0;
- (void)IKDVGrabberUpdated:(id)a0;
- (BOOL)isLiveCapturing;
- (BOOL)isIrisClosed;
- (void)irisOpened:(id)a0;
- (void)irisClosed:(id)a0;
- (void)cameraIsGone:(id)a0;
- (void)stopLiveCapture;
- (BOOL)isTakingPicture;
- (void)takePicture;
- (BOOL)startLiveCapture;
- (void)cameraPictureNotification:(id)a0;
- (void)pickerViewCommonInit;
- (void)setDisableFlash:(BOOL)a0;
- (void)setDisableCountDown:(BOOL)a0;
- (void)setCountdownDelegate:(id)a0;
- (void)scheduleCameraPictureNotificationAfterDelay:(double)a0;
- (void)abortTakePicture;
- (void)directTakePicture;
- (void)_finalizeDirectTakePicture;
- (BOOL)__isRoomWellLit:(char *)a0 size:(struct CGSize { double x0; double x1; })a1 bpr:(int)a2 skipFirstComponent:(BOOL)a3 spp:(int)a4;
- (BOOL)isRoomWellLit;
- (void)fireNextCameraSequence;
- (id)cameraOffText;
- (id)cameraNotConnectedText;
- (id)cameraOffImage;
- (void)drawIrisClosedInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawPositioningCircle;
- (void)startListeningForCameraEvents;
- (void)stopListeningForCameraEvents;
- (void)disposeAudio;
- (short)setupAudio;
- (BOOL)startSequenceGrabber;
- (void)stopSequenceGrabber;
- (void)setFlashRiseTime:(float)a0;
- (void)setFlashSustainTime:(float)a0;
- (void)setFlashFallTime:(float)a0;
- (void)setFlashSaturation:(float)a0;
- (void)setFlashColor:(id)a0;
- (void)setCameraCaptureDelay:(float)a0;

@end

@class NSView, AVVolumeControlSlider;

@interface AVFloatingCaptureControlsViewController : AVCaptureControlsRecordingViewController {
    AVVolumeControlSlider *_volumeControl;
    NSView *_recordButton;
    NSView *_captureDevicePopUpButton;
}

+ (id)keyPathsForValuesAffectingMovableControlsContentView;

- (void)loadView;
- (long long)layoutStyle;
- (void).cxx_destruct;
- (id)initialFirstResponder;
- (id)backgroundBackdropViewMaskImage;
- (struct { double x0; double x1; double x2; double x3; })controlsContentViewMargin;
- (struct CGSize { double x0; double x1; })intrinsicControlsContentViewSize;
- (BOOL)movableControlsContentView;
- (id)recordButtonPauseImage;
- (id)recordButtonRecordImage;
- (id)recordButtonStopImage;
- (void)setupNextKeyView;

@end

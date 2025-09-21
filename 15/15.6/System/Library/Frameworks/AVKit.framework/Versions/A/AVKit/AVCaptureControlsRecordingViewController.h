@class NSButton, NSImage, AVTouchBarRecordingControlsProvider;

@interface AVCaptureControlsRecordingViewController : AVCaptureControlsViewController {
    AVTouchBarRecordingControlsProvider *_touchBarRecordingControlsProvider;
}

@property (nonatomic) char optionKeyPressed;
@property (retain, nonatomic) NSButton *recordButton;
@property (nonatomic) char recordButtonEnabled;
@property (retain, nonatomic) NSImage *recordButtonImage;
@property (nonatomic, getter=isRedDotHidden) char redDotHidden;

+ (id)keyPathsForValuesAffectingRecordButtonEnabled;
+ (id)keyPathsForValuesAffectingRecordButtonImage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)flagsChanged:(id)a0;
- (id)touchBar;
- (id)recordButtonPauseImage;
- (id)recordButtonRecordImage;
- (id)recordButtonStopImage;
- (void)syncRecordButtonWithCaptureStatus;
- (id)touchBarRecordingControlsProvider;

@end

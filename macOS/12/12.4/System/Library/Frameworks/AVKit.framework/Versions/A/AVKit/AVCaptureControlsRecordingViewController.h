@class NSButton, NSImage, AVTouchBarRecordingControlsProvider;

@interface AVCaptureControlsRecordingViewController : AVCaptureControlsViewController {
    AVTouchBarRecordingControlsProvider *_touchBarRecordingControlsProvider;
}

@property (nonatomic) BOOL optionKeyPressed;
@property (retain, nonatomic) NSButton *recordButton;
@property (nonatomic) BOOL recordButtonEnabled;
@property (retain, nonatomic) NSImage *recordButtonImage;
@property (nonatomic, getter=isRedDotHidden) BOOL redDotHidden;

+ (id)keyPathsForValuesAffectingRecordButtonEnabled;
+ (id)keyPathsForValuesAffectingRecordButtonImage;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)touchBar;
- (void)flagsChanged:(id)a0;
- (void)syncRecordButtonWithCaptureStatus;
- (id)recordButtonRecordImage;
- (id)recordButtonPauseImage;
- (id)recordButtonStopImage;
- (id)touchBarRecordingControlsProvider;

@end

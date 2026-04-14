@class IKPictureTakerView, NSView, NSTabView, NSSlider, NSButton, IKPTContentViewController;

@interface IKPTEditorController : IKViewController <IKRecentPicturesButtonDelegate>

@property IKPTContentViewController *ikpt_contentViewController;
@property NSButton *doneButton;
@property NSButton *cancelButton;
@property NSButton *chooseButton;
@property IKPictureTakerView *cropView;
@property NSTabView *editorTabView;
@property NSSlider *zoomSlider;
@property NSButton *minSizeButton;
@property NSButton *maxSizeButton;
@property NSView *countdownView;
@property NSButton *cameraButton;
@property NSButton *effectsButton;

+ (struct CGSize { double x0; double x1; })cropSize;

- (void)loadView;
- (BOOL)isLiveCapturing;
- (struct CGSize { double x0; double x1; })ikPreferredContentSizeForCropAreaSize:(struct CGSize { double x0; double x1; })a0;
- (id)pictureTakerForRecentPicturesButton:(id)a0;
- (void)setLiveCapturing:(BOOL)a0;
- (void)updateContentLayoutForCropAreaSize:(struct CGSize { double x0; double x1; })a0;

@end

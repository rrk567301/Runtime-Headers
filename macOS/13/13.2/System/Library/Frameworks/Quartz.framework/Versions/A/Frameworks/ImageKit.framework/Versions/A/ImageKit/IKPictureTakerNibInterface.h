@class NSBox, NSView, NSSlider, NSTabView, NSButton;

@interface IKPictureTakerNibInterface : NSObject <IKPictureTakerInterface> {
    NSView *_layerSuperview;
    id _imageView;
    id _countdownView;
    NSButton *_chooseButton;
    NSButton *_setButton;
    NSButton *_cancelButton;
    NSSlider *_slider;
    NSButton *_smallerButton;
    NSButton *_largerButton;
    NSButton *_cameraButton;
    NSButton *_fxButton;
    NSTabView *_countdownTabView;
    NSView *_pictureTakerViewBox;
    NSBox *_verticalSeparator;
    id _delegate;
}

- (id)delegate;
- (void)setDelegate:(id)a0;
- (id)slider;
- (void)awakeFromNib;
- (id)cancelButton;
- (id)imageView;
- (id)pictureTaker;
- (id)pictureTakerViewBox;
- (id)layerSuperview;
- (id)countdownView;
- (id)chooseButton;
- (id)setButton;
- (id)smallerButton;
- (id)largerButton;
- (id)cameraButton;
- (id)fxButton;
- (id)countdownTabView;
- (void)setMode:(long long)a0 options:(id)a1;
- (void)setFxButtonsAreaInPanel:(id)a0 collapsed:(BOOL)a1;
- (id)pictureTakerForRecentPicturesButton:(id)a0;

@end

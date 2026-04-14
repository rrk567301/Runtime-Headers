@class NSImageView, NSBox, NSTextField, NSImage, NSLayoutConstraint;

@interface ParsecActionButtonView : NSView {
    NSImage *_image;
    NSLayoutConstraint *_captionLabelBaselineToImageViewBottomConstraint;
    long long _backgroundStyle;
}

@property (weak, nonatomic) NSImageView *imageView;
@property (weak, nonatomic) NSTextField *captionLabel;
@property (weak, nonatomic) NSBox *separatorView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopConstraint;
@property (nonatomic, getter=isSelected) BOOL selected;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setBackgroundStyle:(long long)a0;
- (void)_updateAppearance;
- (long long)_currentAppearance;
- (void)_setShowsCaption:(BOOL)a0;
- (void)_updateCaptionLabelAppearance;
- (void)_updateImageViewAppearance;
- (void)_updateSeparatorAppearance;
- (void)setImage:(id)a0 caption:(id)a1;

@end

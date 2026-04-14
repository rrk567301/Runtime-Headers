@class StartPagePopoverItemView, NSImageView, NSView, NSLayoutConstraint, NSButton;

@interface BackgroundThumbnailImageViewItem : NSCollectionViewItem {
    StartPagePopoverItemView *_imageView;
    NSButton *_button;
    NSImageView *_xmarkButton;
    NSLayoutConstraint *_buttonXConstraint;
    NSLayoutConstraint *_buttonYConstraint;
    NSLayoutConstraint *_buttonWidthConstraint;
    NSLayoutConstraint *_buttonHeightConstraint;
}

@property (retain, nonatomic) NSView *backgroundView;

+ (id)_plusImage;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)loadView;
- (void)_showOpenPanel;
- (void)viewWillAppear;
- (void)setSelected:(BOOL)a0;
- (id)_builtInImageNameToSimpleName:(id)a0;
- (void)_configureButton;
- (BOOL)_clearImageButtonVisible;
- (void)forwardSelectionToCollectionView:(id)a0;
- (void)updateBackgroundImage:(struct CGImage { } *)a0 accessibilityLabel:(id)a1;
- (void)_clearImage;
- (void)removeOpenButton;
- (void)addOpenButton;
- (void)addClearButton;
- (void)untoggleButton;

@end

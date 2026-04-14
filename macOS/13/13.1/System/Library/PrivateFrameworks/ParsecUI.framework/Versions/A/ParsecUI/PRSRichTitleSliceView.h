@class NSTextField, NSString, NSArray, PRSCardSection, NSAttributedString, PRSImageView, NSImage, NSLayoutConstraint;

@interface PRSRichTitleSliceView : NSView {
    NSString *_subtitleText;
    NSString *_descriptionText;
    unsigned long long _tomatoPlacement;
    NSImage *_tomatoGlyph;
    NSString *_tomatoText;
    float _ratingLevel;
    NSString *_ratingText;
    unsigned long long _moreGlyphsPlacement;
}

@property (retain) NSAttributedString *fullDescriptionTextAttributedString;
@property NSImage *image;
@property BOOL needsRoundedImage;
@property double roundingRadius;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (readonly) unsigned long long tomatoPlacement;
@property (readonly) NSImage *tomatoGlyph;
@property (readonly) NSString *tomatoText;
@property (readonly) float ratingLevel;
@property (readonly) NSString *ratingText;
@property (readonly) unsigned long long moreGlyphsPlacement;
@property (readonly) NSArray *moreGlyphs;
@property PRSCardSection *cardSection;
@property (weak) PRSImageView *imageView;
@property (weak) PRSImageView *overlayImageView;
@property (weak) NSTextField *titleTextField;
@property (weak) NSTextField *descriptionTextField;
@property (weak) NSTextField *auxiliaryTopText;
@property (weak) NSTextField *auxiliaryMiddleText;
@property (weak) NSTextField *auxiliaryBottomText;
@property (weak) NSLayoutConstraint *titleToImageConstraint;
@property (weak) NSLayoutConstraint *titleToSuperViewLeadingConstraint;
@property (weak) NSLayoutConstraint *imageTopToTitleTopConstraint;
@property (weak) NSLayoutConstraint *imageToSuperviewConstraint;
@property (weak) NSLayoutConstraint *imageToSuperViewBottomConstraint;
@property (weak) NSLayoutConstraint *constraintMiddleTextInView;
@property (weak) NSLayoutConstraint *constraintMiddleTextHorizontallyInView;
@property (weak) NSLayoutConstraint *constraintTopTextInView;
@property (weak) NSLayoutConstraint *constraintBottomTextInView;
@property (weak) NSLayoutConstraint *constraintTitleWidth;
@property (weak) NSLayoutConstraint *constraintDescriptionWidth;
@property (weak) NSLayoutConstraint *constraintDescriptionSpaceToTitle;
@property (weak) NSLayoutConstraint *constraintDescriptionToBottom;
@property (weak) NSLayoutConstraint *constraintTitleMaxHeight;
@property (weak) NSLayoutConstraint *constraintDescriptionMaxHeight;
@property (weak) NSLayoutConstraint *constraintTitleToTop;
@property (weak) NSLayoutConstraint *constraintTitleToView;
@property (weak) NSLayoutConstraint *titleToSuperViewConstraint;
@property (nonatomic) BOOL overlayPositionedAtBottomRightCornerOfImage;
@property (weak) NSLayoutConstraint *overlayCenteredOnImageX;
@property (weak) NSLayoutConstraint *overlayCenteredOnImageY;
@property (weak) NSLayoutConstraint *overlayRightAlignedToImage;
@property (weak) NSLayoutConstraint *overlayBottomAlignedToImage;

- (void).cxx_destruct;
- (void)openURL:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)awakeFromNib;
- (BOOL)accessibilityPerformPress;
- (void)setOverlayImage:(id)a0;
- (void)processChanges;
- (long long)getHeightForText:(id)a0 maxSize:(long long)a1 font:(id)a2;
- (id)fullDescriptionAttributedString;
- (void)setTomatoPlacement:(unsigned long long)a0 glyph:(id)a1 text:(id)a2;
- (void)setRatingLevel:(float)a0 text:(id)a1;
- (void)setMoreGlyphsPlacement:(unsigned long long)a0 glyphs:(id)a1;
- (void)setAuxiliaryInfoWithTopText:(id)a0 middleText:(id)a1 bottomText:(id)a2 color:(id)a3;
- (void)alignTitle:(long long)a0;
- (void)addBuyOptions:(id)a0 addActionButton:(id)a1 locallyAvailable:(BOOL)a2 forCardSection:(id)a3;
- (void)setContraint:(id)a0 attached:(BOOL)a1 toView:(id)a2;

@end

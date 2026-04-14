@class NSString, GKUITheme, NSImage, NSDictionary;

@interface GKMButtonCell : NSButtonCell {
    NSString *_themeStyle;
    double _drawingFontSize;
    BOOL _specialFocusRingMask;
    int _buttonKind;
}

@property (copy, nonatomic) NSString *themeStyle;
@property (nonatomic) int buttonKind;
@property (retain, nonatomic) GKUITheme *theme;
@property (readonly, nonatomic) NSImage *bezelImage;
@property (readonly, nonatomic) NSDictionary *textAttributes;
@property (retain, nonatomic) NSImage *normalBezelImage;
@property (retain, nonatomic) NSImage *alternateBezelImage;
@property (retain, nonatomic) NSImage *pressedBezelImage;
@property (retain, nonatomic) NSImage *disabledBezelImage;
@property (retain, nonatomic) NSImage *pressedImage;
@property (retain, nonatomic) NSImage *pressedAlternateImage;
@property (retain, nonatomic) NSImage *disabledImage;
@property (retain, nonatomic) NSDictionary *normalTextAttributes;
@property (retain, nonatomic) NSDictionary *alternateTextAttributes;
@property (retain, nonatomic) NSDictionary *pressedTextAttributes;
@property (retain, nonatomic) NSDictionary *disabledTextAttributes;
@property (nonatomic) double minFontSize;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultThemeStyle;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)drawBezelWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setControlView:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_textAttributes;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldUseStyledTextInView:(id)a0;
- (void)drawFocusRingMaskWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_shouldDrawTextWithDisabledAppearance;
- (id)textAttributes;
- (void)_preeffectBaseImage:(id *)a0 state:(void *)a1 backgroundStyle:(void *)a2;
- (id)bezelImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bezelRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)resetThemeStyle;
- (void)setupNormalFontWithHeaderBackground:(BOOL)a0 smallFont:(BOOL)a1;
- (void)setupForNormal;
- (void)setupForNormalOnHeaderBackground;
- (void)setupForSmall;
- (void)setupForSmallOnHeaderBackground;
- (void)setupForSmallAlternate;
- (void)setupForSmallAlternateOnHeaderBackground;
- (void)setupForSmallAlternate2;
- (void)setupForSmallAlternate2OnHeaderBackground;
- (void)setupForSmallWithNormalFont;
- (void)setupForSmallOnHeaderBackgroundWithNormalFont;
- (void)setupForTitleOnFelt;
- (void)setupForNavbar;
- (void)setupForNavbarBack;
- (void)setupForNavbarBlue;
- (void)setupForFacebookLike;

@end

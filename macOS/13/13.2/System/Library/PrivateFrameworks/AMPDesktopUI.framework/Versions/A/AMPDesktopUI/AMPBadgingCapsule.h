@class NSTrackingArea, NSVisualEffectView;

@interface AMPBadgingCapsule : NSButton

@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (nonatomic) BOOL rolledOver;
@property (retain, nonatomic) NSVisualEffectView *fillMaterial;
@property (nonatomic) unsigned long long color;

+ (Class)cellClass;
+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)setControlSize:(unsigned long long)a0;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)initWithColor:(unsigned long long)a0;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (void)prepareForInterfaceBuilder;
- (void)commonInit;
- (id)currentTextColor;
- (id)initWithTitle:(id)a0 color:(unsigned long long)a1;
- (void)updateFontForSize;
- (id)fillColorToUse;
- (id)currentFillColor;

@end

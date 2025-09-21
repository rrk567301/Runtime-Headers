@class CALayer, NSColor;

@interface KeyColorButton : NSButton {
    char _showAttentionBadge;
}

@property (retain, nonatomic) CALayer *badgeLayer;
@property (nonatomic) double cornerRadius;
@property (nonatomic) char emphasized;
@property (readonly, nonatomic) NSColor *backgroundBaseColor;
@property (retain, nonatomic) NSColor *titleOverrideColor;
@property (nonatomic) char showAttentionBadge;

+ (Class)cellClass;
+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_currentFillColor;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)prepareForInterfaceBuilder;
- (void)updateLayer;
- (char)wantsUpdateLayer;
- (void)_commonSetup;
- (double)_actualCornerRadius;
- (id)propertyKeysForViewSpy;

@end

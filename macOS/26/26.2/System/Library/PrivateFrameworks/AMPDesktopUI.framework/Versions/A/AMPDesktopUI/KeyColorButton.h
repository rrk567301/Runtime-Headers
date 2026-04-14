@class CALayer, NSColor;

@interface KeyColorButton : NSButton {
    BOOL _showAttentionBadge;
}

@property (retain, nonatomic) CALayer *badgeLayer;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL emphasized;
@property (readonly, nonatomic) NSColor *backgroundBaseColor;
@property (retain, nonatomic) NSColor *titleOverrideColor;
@property (nonatomic) BOOL showAttentionBadge;

+ (Class)cellClass;
+ (id)keyPathsForValuesInvalidatingDisplay;

- (id)initWithCoder:(id)a0;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)encodeWithCoder:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)_currentFillColor;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (void)prepareForInterfaceBuilder;
- (BOOL)wantsUpdateLayer;
- (void)_commonSetup;
- (double)_actualCornerRadius;
- (id)propertyKeysForViewSpy;

@end

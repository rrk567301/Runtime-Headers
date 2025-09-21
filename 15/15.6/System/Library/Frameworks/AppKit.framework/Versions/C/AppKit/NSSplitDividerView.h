@class NSSplitView, CALayer, NSNumber, NSColor;

@interface NSSplitDividerView : NSView {
    long long _style;
    long long _orientation;
    NSColor *_backgroundColor;
    NSNumber *_thickness;
    CALayer *_backgroundLayer;
    char _inVibrantDivider;
}

@property long long style;
@property long long orientation;
@property (weak) NSSplitView *owningSplitView;
@property (copy) NSColor *backgroundColor;
@property (copy) NSNumber *thickness;
@property (readonly) double leadingOverhang;
@property (readonly) char isVibrantDivider;
@property char inVibrantDivider;

+ (id)_cuiOptionsForSidebarDividerWithBackingScaleFactor:(double)a0;
+ (double)sidebarDividerWidthWithAppearance:(id)a0 backingScaleFactor:(double)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundLayerFrame;
- (struct __CFString { } *)_coreUIDimpleVariant;
- (id)_coreUIOptions;
- (struct __CFString { } *)_coreUIOrientation;
- (struct __CFString { } *)_coreUIState;
- (void)_drawDimpleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)_isInTexturedWindow;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_sidebarDividerInsets;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (char)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)effectiveThickness;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStyle:(long long)a0 orientation:(long long)a1;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (char)isOpaque;
- (char)mouseDownCanMoveWindow;
- (void)setLayer:(id)a0;
- (char)shouldBeArchived;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end

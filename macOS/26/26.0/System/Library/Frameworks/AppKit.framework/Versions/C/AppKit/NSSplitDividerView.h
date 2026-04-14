@class NSSplitView, CALayer, NSNumber, NSColor;

@interface NSSplitDividerView : NSView {
    long long _style;
    long long _orientation;
    NSColor *_backgroundColor;
    NSNumber *_thickness;
    CALayer *_backgroundLayer;
    BOOL _inVibrantDivider;
}

@property long long style;
@property long long orientation;
@property (weak) NSSplitView *owningSplitView;
@property (copy) NSColor *backgroundColor;
@property (copy) NSNumber *thickness;
@property (readonly) double leadingOverhang;
@property (readonly) BOOL isVibrantDivider;
@property BOOL inVibrantDivider;

+ (id)_cuiOptionsForSidebarDividerWithBackingScaleFactor:(double)a0;
+ (double)sidebarDividerWidthWithAppearance:(id)a0 backingScaleFactor:(double)a1;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)updateLayer;
- (void)setLayer:(id)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_backgroundLayerFrame;
- (struct __CFString { } *)_coreUIDimpleVariant;
- (id)_coreUIOptions;
- (struct __CFString { } *)_coreUIOrientation;
- (struct __CFString { } *)_coreUIState;
- (void)_drawDimpleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_isInTexturedWindow;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })_sidebarDividerInsets;
- (double)effectiveThickness;
- (id)initWithStyle:(long long)a0 orientation:(long long)a1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)shouldBeArchived;
- (BOOL)wantsUpdateLayer;

@end

@class NSDictionary, NSColor;

@interface NSWidgetView : NSView {
    NSDictionary *_widgetDefinition;
}

@property (readonly) NSDictionary *baseWidgetKeys;
@property (copy) NSDictionary *widgetDefinition;
@property (copy) NSDictionary *maskWidgetDefinition;
@property (copy) NSColor *tintColor;
@property (readonly) struct CGSize { double x0; double x1; } widgetSize;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly) double baselineOffsetFromBottom;
@property (readonly) unsigned long long scalableAxes;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)layout;
- (void)updateLayer;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)encodeWithCoder:(id)a0;
- (BOOL)allowsVibrancy;
- (id)_queryWidgetMetrics:(id)a0;
- (int)_vibrancyBlendMode;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (long long)layerContentsRedrawPolicy;
- (BOOL)wantsUpdateLayer;

@end

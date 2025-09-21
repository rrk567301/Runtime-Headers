@class NSDictionary;

@interface NSWidgetView : NSView {
    NSDictionary *_widgetDefinition;
}

@property (readonly) NSDictionary *baseWidgetKeys;
@property (copy) NSDictionary *widgetDefinition;
@property (copy) NSDictionary *maskWidgetDefinition;
@property (readonly) struct CGSize { double x0; double x1; } widgetSize;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (readonly) double baselineOffsetFromBottom;
@property (readonly) unsigned long long scalableAxes;

+ (id)keyPathsForValuesInvalidatingDisplay;
+ (id)keyPathsForValuesInvalidatingIntrinsicContentSize;

- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct { double x0; double x1; })_baselineOffsetsAtSize:(struct CGSize { double x0; double x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)updateLayer;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_queryWidgetMetrics:(id)a0;
- (int)_vibrancyBlendMode;
- (void)drawFocusRingMask;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusRingMaskBounds;
- (long long)layerContentsRedrawPolicy;
- (BOOL)wantsUpdateLayer;

@end

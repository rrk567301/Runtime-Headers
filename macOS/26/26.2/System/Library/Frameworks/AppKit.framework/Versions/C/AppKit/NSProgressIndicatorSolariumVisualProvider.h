@interface NSProgressIndicatorSolariumVisualProvider : NSObject <NSProgressIndicatorVisualProvider> {
    void /* unknown type, empty encoding */ _linearIndicatorLayer;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, weak) void /* function */ progressIndicator;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;

- (void)startAnimation;
- (void)updateLayer;
- (void)updateConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (int)vibrancyBlendMode;
- (BOOL)wantsUpdateLayer;

@end

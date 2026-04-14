@interface NSProgressIndicatorSolariumVisualProvider : NSObject <NSProgressIndicatorVisualProvider> {
    void /* unknown type, empty encoding */ _linearIndicatorLayer;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic, weak) void /* function */ progressIndicator;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimation;
- (id)init;
- (void).cxx_destruct;
- (void)updateConfiguration:(id)a0;
- (void)updateLayer;
- (void)stopAnimation;
- (int)vibrancyBlendMode;
- (BOOL)wantsUpdateLayer;

@end

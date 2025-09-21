@class NSProgressIndicatorConfiguration;

@interface NSProgressIndicatorSolariumVisualProvider : NSObject <NSProgressIndicatorVisualProvider> {
    void /* unknown type, empty encoding */ _linearIndicatorLayer;
}

@property (nonatomic, weak) void /* function */ progressIndicator;
@property (nonatomic, retain) NSProgressIndicatorConfiguration *configuration;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)startAnimation;
- (void)updateLayer;
- (id)init;
- (void)stopAnimation;
- (void).cxx_destruct;
- (int)vibrancyBlendMode;
- (BOOL)wantsUpdateLayer;

@end

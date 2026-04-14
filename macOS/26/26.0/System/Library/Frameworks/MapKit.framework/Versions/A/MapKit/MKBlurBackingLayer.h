@class CALayer;

@interface MKBlurBackingLayer : CALayer {
    CALayer *_backdropLayer;
    struct CGColor { } *_fallbackColor;
}

- (void)updateAppearance;
- (void)dealloc;
- (void)layoutSublayers;
- (id)init;
- (void).cxx_destruct;
- (void)accessibilityDisplayOptionsDidChange:(id)a0;

@end

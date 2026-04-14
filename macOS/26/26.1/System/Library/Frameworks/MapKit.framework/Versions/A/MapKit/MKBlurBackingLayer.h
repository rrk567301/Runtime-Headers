@class CALayer;

@interface MKBlurBackingLayer : CALayer {
    CALayer *_backdropLayer;
    struct CGColor { } *_fallbackColor;
}

- (void)layoutSublayers;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateAppearance;
- (id)init;
- (void)accessibilityDisplayOptionsDidChange:(id)a0;

@end

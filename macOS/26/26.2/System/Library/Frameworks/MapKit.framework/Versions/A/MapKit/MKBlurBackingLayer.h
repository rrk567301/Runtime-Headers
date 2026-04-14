@class CALayer;

@interface MKBlurBackingLayer : CALayer {
    CALayer *_backdropLayer;
    struct CGColor { } *_fallbackColor;
}

- (void)layoutSublayers;
- (void)updateAppearance;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)accessibilityDisplayOptionsDidChange:(id)a0;

@end

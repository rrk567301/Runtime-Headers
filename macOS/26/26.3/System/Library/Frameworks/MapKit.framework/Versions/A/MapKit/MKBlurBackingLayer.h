@class CALayer;

@interface MKBlurBackingLayer : CALayer {
    CALayer *_backdropLayer;
    struct CGColor { } *_fallbackColor;
}

- (void)layoutSublayers;
- (id)init;
- (void)updateAppearance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accessibilityDisplayOptionsDidChange:(id)a0;

@end

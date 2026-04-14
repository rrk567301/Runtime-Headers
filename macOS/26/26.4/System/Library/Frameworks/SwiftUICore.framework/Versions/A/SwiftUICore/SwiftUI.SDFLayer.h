@interface SwiftUI.SDFLayer : CALayer <CABackdropLayerDelegate> {
    void /* unknown type, empty encoding */ hasContentLayer;
    void /* unknown type, empty encoding */ backdropObserver;
    void /* unknown type, empty encoding */ sdfStyle;
    void /* unknown type, empty encoding */ sdfEffects;
    void /* unknown type, empty encoding */ sdfSubsets;
    void /* unknown type, empty encoding */ sdfElements;
    void /* unknown type, empty encoding */ distanceRange;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ ovalization;
    void /* unknown type, empty encoding */ currentLuminance;
    void /* unknown type, empty encoding */ hasContentGroup;
    void /* unknown type, empty encoding */ shapeBounds;
    void /* unknown type, empty encoding */ needsUpdate;
}

- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)backdropLayer:(id)a0 didChangeLuma:(double)a1;

@end

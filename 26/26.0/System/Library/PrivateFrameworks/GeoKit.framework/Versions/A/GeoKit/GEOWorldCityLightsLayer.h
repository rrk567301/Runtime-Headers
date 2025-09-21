@class NSTimer;

@interface GEOWorldCityLightsLayer : GEOWorldImageLayer {
    NSTimer *animationTimer;
}

+ (id)worldCityLightsLayerWithImages:(id)a0;

- (void)startAnimation;
- (void)dealloc;
- (double)rotation;
- (void)stopAnimation;
- (id)initWithImages:(id)a0;
- (void)setRotation:(double)a0;
- (id)_prototypeLayer;
- (void)_animationTimer:(id)a0;

@end

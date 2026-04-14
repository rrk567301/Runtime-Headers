@class NSTimer;

@interface GEOWorldCityLightsLayer : GEOWorldImageLayer {
    NSTimer *animationTimer;
}

+ (id)worldCityLightsLayerWithImages:(id)a0;

- (void)dealloc;
- (double)rotation;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setRotation:(double)a0;
- (id)initWithImages:(id)a0;
- (void)_animationTimer:(id)a0;
- (id)_prototypeLayer;

@end

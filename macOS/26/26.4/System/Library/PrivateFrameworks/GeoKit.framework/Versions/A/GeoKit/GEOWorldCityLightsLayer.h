@class NSTimer;

@interface GEOWorldCityLightsLayer : GEOWorldImageLayer {
    NSTimer *animationTimer;
}

+ (id)worldCityLightsLayerWithImages:(id)a0;

- (id)initWithImages:(id)a0;
- (void)setRotation:(double)a0;
- (double)rotation;
- (void)startAnimation;
- (void)stopAnimation;
- (void)dealloc;
- (id)_prototypeLayer;
- (void)_animationTimer:(id)a0;

@end

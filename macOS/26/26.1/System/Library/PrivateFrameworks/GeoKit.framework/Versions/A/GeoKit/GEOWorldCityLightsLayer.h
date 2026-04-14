@class NSTimer;

@interface GEOWorldCityLightsLayer : GEOWorldImageLayer {
    NSTimer *animationTimer;
}

+ (id)worldCityLightsLayerWithImages:(id)a0;

- (double)rotation;
- (void)startAnimation;
- (id)initWithImages:(id)a0;
- (void)setRotation:(double)a0;
- (void)dealloc;
- (void)stopAnimation;
- (id)_prototypeLayer;
- (void)_animationTimer:(id)a0;

@end

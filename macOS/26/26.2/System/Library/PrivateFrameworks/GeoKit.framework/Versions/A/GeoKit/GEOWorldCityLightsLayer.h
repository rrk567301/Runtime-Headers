@class NSTimer;

@interface GEOWorldCityLightsLayer : GEOWorldImageLayer {
    NSTimer *animationTimer;
}

+ (id)worldCityLightsLayerWithImages:(id)a0;

- (double)rotation;
- (void)setRotation:(double)a0;
- (void)startAnimation;
- (void)stopAnimation;
- (id)initWithImages:(id)a0;
- (void)dealloc;
- (id)_prototypeLayer;
- (void)_animationTimer:(id)a0;

@end

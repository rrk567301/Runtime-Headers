@class NSArray, RBDisplayList, RBLayer, CADisplayLink, CALayer, NSString, RBDisplayListInterpolator;

@interface _WTSweepTextEffect : _WTTextEffect <RBLayerDelegate> {
    NSArray *_palette;
    NSArray *_lightEdgePalette;
    BOOL _brightnessBoost;
}

@property (retain) RBLayer *rbLayer;
@property (retain) RBDisplayList *startDisplayList;
@property (retain) RBDisplayList *endDisplayList;
@property (retain) RBDisplayListInterpolator *interpolator;
@property (retain) CADisplayLink *displayLink;
@property double startTime;
@property (retain) CALayer *rootMaskLayer;
@property (retain) CALayer *fadeOutLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)initWithChunk:(id)a0 effectView:(id)a1;
- (void)invalidate:(BOOL)a0;
- (void)RBLayer:(id)a0 draw:(id)a1;
- (void)prepareWithPalette:(id)a0 lightEdgePalette:(id)a1 brightnessBoost:(BOOL)a2;
- (void)updateEffectWith:(id)a0;

@end

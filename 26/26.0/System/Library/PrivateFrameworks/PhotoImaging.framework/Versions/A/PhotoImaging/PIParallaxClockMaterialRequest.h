@class PIParallaxStyle, PFParallaxLayerStack;

@interface PIParallaxClockMaterialRequest : NURenderRequest

@property (retain, nonatomic) PFParallaxLayerStack *layerStack;
@property (retain, nonatomic) PIParallaxStyle *style;
@property (nonatomic) long long luminanceCalculationType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (id)initWithLayerStack:(id)a0;

@end

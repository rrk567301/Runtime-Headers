@class CASDFEffect;

@interface CASDFLayer : CALayer

@property (retain) CASDFEffect *effect;
@property double smoothness;
@property double gaussianRadius;
@property double effectOffset;
@property BOOL mergeElements;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)didChangeValueForKey:(id)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (id)initWithLayer:(id)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)reloadValueForKeyPath:(id)a0;

@end

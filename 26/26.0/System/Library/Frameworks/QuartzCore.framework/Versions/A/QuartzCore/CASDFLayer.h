@class CASDFEffect;

@interface CASDFLayer : CALayer

@property (retain) CASDFEffect *effect;
@property double smoothness;
@property double effectOffset;
@property BOOL mergeElements;

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;

- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (id)initWithLayer:(id)a0;
- (void)reloadValueForKeyPath:(id)a0;
- (void)didChangeValueForKey:(id)a0;

@end

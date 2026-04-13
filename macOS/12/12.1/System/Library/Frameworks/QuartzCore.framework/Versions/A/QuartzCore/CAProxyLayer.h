@class NSDictionary;

@interface CAProxyLayer : CALayer

@property (copy) NSDictionary *proxyProperties;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)didChangeValueForKey:(id)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;

@end

@class NSDictionary;

@interface CAProxyLayer : CALayer

@property (copy) NSDictionary *proxyProperties;

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;

- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)didChangeValueForKey:(id)a0;

@end

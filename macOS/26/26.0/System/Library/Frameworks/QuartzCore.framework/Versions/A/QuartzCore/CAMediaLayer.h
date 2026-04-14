@interface CAMediaLayer : CALayer

@property BOOL allowedContentsHideSublayers;

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;

- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)didChangeValueForKey:(id)a0;

@end

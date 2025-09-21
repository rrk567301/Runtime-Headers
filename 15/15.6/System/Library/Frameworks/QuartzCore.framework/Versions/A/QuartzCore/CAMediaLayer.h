@interface CAMediaLayer : CALayer

@property char allowedContentsHideSublayers;

+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;
+ (char)CA_automaticallyNotifiesObservers:(Class)a0;
+ (char)_hasRenderLayerSubclass;

- (void)didChangeValueForKey:(id)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;

@end

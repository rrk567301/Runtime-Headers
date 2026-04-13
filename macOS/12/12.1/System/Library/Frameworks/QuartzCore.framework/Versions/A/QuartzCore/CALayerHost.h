@interface CALayerHost : CALayer

@property unsigned int contextId;
@property BOOL inheritsSecurity;
@property BOOL preservesFlip;

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;

@end

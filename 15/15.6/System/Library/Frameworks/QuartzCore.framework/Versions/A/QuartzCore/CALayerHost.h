@interface CALayerHost : CALayer

@property unsigned int contextId;
@property char inheritsSecurity;
@property char resizesHostedContext;
@property char preservesFlip;
@property char stopsHitTestTransformAccumulation;
@property char stopsSecureSuperlayersValidation;
@property char transformsToScreenSpace;
@property char sequestered;

+ (char)CA_automaticallyNotifiesObservers:(Class)a0;
+ (char)_hasRenderLayerSubclass;
+ (id)allLayerHosts;

- (void)dealloc;
- (id)init;
- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(char)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;

@end

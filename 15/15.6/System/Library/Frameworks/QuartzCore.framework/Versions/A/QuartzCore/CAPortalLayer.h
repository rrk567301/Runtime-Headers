@class CALayer, NSDictionary;

@interface CAPortalLayer : CALayer

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property char hidesSourceLayer;
@property char matchesOpacity;
@property char matchesPosition;
@property char matchesTransform;
@property char allowsBackdropGroups;
@property char crossDisplay;
@property char excludeSeparated;
@property char allowedInContextTransform;
@property (copy) NSDictionary *overrides;

+ (char)CA_automaticallyNotifiesObservers:(Class)a0;
+ (char)_hasRenderLayerSubclass;

- (void)didChangeValueForKey:(id)a0;
- (void)layerDidBecomeVisible:(char)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;

@end

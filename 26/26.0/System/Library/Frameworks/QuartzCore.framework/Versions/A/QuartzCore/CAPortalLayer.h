@class CALayer, NSDictionary;

@interface CAPortalLayer : CALayer

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property BOOL hidesSourceLayer;
@property float sourceLayerOpacityScale;
@property BOOL matchesOpacity;
@property BOOL matchesPosition;
@property BOOL matchesTransform;
@property BOOL allowsBackdropGroups;
@property BOOL crossDisplay;
@property BOOL excludeSeparated;
@property BOOL allowedInContextTransform;
@property (copy) NSDictionary *overrides;
@property BOOL hidesSourceLayerInOtherPortals;

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)defaultValueForKey:(id)a0;

- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)layerDidBecomeVisible:(BOOL)a0;
- (void)didChangeValueForKey:(id)a0;

@end

@class NSString;

@interface CACarPlayRegionLayer : CALayer

@property (copy) NSString *identifier;

+ (char)CA_automaticallyNotifiesObservers:(Class)a0;
+ (char)_hasRenderLayerSubclass;

- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;

@end

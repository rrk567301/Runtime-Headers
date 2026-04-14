@class NSString;

@interface CASDFElementLayer : CALayer

@property (copy) NSString *mode;
@property double contentsZeroValueDistance;
@property double contentsOneValueDistance;
@property (copy) NSString *operation;
@property double gradientOvalization;
@property BOOL hitTestsAsFill;

+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)didChangeValueForKey:(id)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (unsigned int)_renderImageCopyFlags;

@end

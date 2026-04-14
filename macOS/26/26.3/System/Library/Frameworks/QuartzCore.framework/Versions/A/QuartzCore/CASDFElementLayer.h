@class NSString;

@interface CASDFElementLayer : CALayer

@property (copy) NSString *mode;
@property double contentsZeroValueDistance;
@property double contentsOneValueDistance;
@property (copy) NSString *operation;
@property double gradientOvalization;
@property BOOL hitTestsAsFill;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)didChangeValueForKey:(id)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (unsigned int)_renderImageCopyFlags;

@end

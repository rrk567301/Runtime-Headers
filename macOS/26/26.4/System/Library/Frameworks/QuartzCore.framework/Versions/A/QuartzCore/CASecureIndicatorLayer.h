@class NSString, NSArray;

@interface CASecureIndicatorLayer : CALayer

@property (copy) NSString *privacyIndicatorType;
@property double glyphScale;
@property (readonly) NSArray *validPositions;
@property (readonly) NSArray *validDynamicPositions;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;

- (void)didChangeValueForKey:(id)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;

@end

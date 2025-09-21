@class NSString;

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString *renderMode;
@property char invertsShape;
@property struct CGColor { } *foregroundColor;
@property double offset;
@property double sharpness;
@property double lineWidth;

+ (id)defaultValueForKey:(id)a0;
+ (id)CA_attributes;
+ (char)CA_automaticallyNotifiesObservers:(Class)a0;
+ (char)_hasRenderLayerSubclass;

- (void)didChangeValueForKey:(id)a0;
- (void)_colorSpaceDidChange;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (unsigned int)_renderImageCopyFlags;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)a0;

@end

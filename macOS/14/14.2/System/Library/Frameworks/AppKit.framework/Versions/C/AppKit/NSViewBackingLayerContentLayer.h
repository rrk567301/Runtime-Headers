@class NSViewBackingStoreImage;

@interface NSViewBackingLayerContentLayer : CALayer

@property (copy) NSViewBackingStoreImage *image;

+ (void)initialize;
+ (id)defaultActionForKey:(id)a0;
+ (id)defaultValueForKey:(id)a0;
+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)hitTestsContentsAlphaChannel;
- (void)renderInContext:(struct CGContext { } *)a0;

@end

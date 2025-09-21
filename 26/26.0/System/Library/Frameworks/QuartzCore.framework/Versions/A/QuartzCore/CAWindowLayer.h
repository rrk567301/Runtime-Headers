@class NSString;
@protocol CAWindowLayerDelegate, CALayerDelegate;

@interface CAWindowLayer : CALayer

@property (nonatomic) BOOL windowFlattened;
@property double postCommitDuration;
@property BOOL ignoreAnimations;
@property BOOL fullyOccluded;
@property (copy) NSString *flattenMode;
@property (weak) id<CAWindowLayerDelegate, CALayerDelegate> delegate;

+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;

- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void)dealloc;
- (id)init;
- (void)didChangeValueForKey:(id)a0;

@end

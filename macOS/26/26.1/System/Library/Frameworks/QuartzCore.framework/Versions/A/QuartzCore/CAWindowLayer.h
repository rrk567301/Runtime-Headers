@class NSString;
@protocol CAWindowLayerDelegate, CALayerDelegate;

@interface CAWindowLayer : CALayer

@property (nonatomic) BOOL windowFlattened;
@property double postCommitDuration;
@property BOOL ignoreAnimations;
@property BOOL fullyOccluded;
@property (copy) NSString *flattenMode;
@property (weak) id<CAWindowLayerDelegate, CALayerDelegate> delegate;

+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)CA_attributes;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)didChangeValueForKey:(id)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)dealloc;
- (id)init;

@end

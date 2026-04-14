@class NSString;
@protocol CAWindowLayerDelegate, CALayerDelegate;

@interface CAWindowLayer : CALayer

@property (nonatomic) BOOL windowFlattened;
@property double postCommitDuration;
@property BOOL ignoreAnimations;
@property BOOL fullyOccluded;
@property (copy) NSString *flattenMode;
@property (weak) id<CAWindowLayerDelegate, CALayerDelegate> delegate;

+ (id)CA_attributes;
+ (id)defaultValueForKey:(id)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;

- (void)didChangeValueForKey:(id)a0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (id)init;
- (void)dealloc;

@end

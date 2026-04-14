@class NSMutableSet;

@interface PKMetalUnpurgeableStrokeRenderCache : PKMetalStrokeRenderCache {
    NSMutableSet *_lockedResourceSet;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInk:(id)a0;
- (void)addBuffer:(id)a0;
- (void)addSecondaryBuffer:(id)a0;

@end

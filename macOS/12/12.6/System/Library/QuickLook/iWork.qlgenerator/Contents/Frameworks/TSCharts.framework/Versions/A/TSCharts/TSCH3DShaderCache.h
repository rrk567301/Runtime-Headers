@class NSMutableArray;
@protocol TSCH3DProtectResourceDelegate;

@interface TSCH3DShaderCache : NSObject {
    NSMutableArray *_shaderCache;
}

@property (weak, nonatomic) id<TSCH3DProtectResourceDelegate> protectResourceDelegate;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (id)shaderForShaderContext:(id)a0 initializeProgramBlock:(id /* block */)a1;
- (void)p_unprotectAllCacheItems;
- (void)p_ensureCacheLimit;
- (void)debug_verifyUniqueShadersInCache;

@end

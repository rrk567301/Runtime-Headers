@class NSMutableArray;
@protocol TSCH3DProtectResourceDelegate;

@interface TSCH3DShaderCache : NSObject {
    NSMutableArray *_shaderCache;
}

@property (weak, nonatomic) id<TSCH3DProtectResourceDelegate> protectResourceDelegate;

- (void)flush;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)debug_verifyUniqueShadersInCache;
- (void)p_ensureCacheLimit;
- (void)p_unprotectAllCacheItems;
- (id)shaderForShaderContext:(id)a0 initializeProgramBlock:(id /* block */)a1;

@end

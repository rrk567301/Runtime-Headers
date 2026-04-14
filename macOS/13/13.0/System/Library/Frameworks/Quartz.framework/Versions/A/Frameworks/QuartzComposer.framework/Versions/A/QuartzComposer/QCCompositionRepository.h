@class NSObject;
@protocol OS_dispatch_queue;

@interface QCCompositionRepository : NSObject {
    NSObject<OS_dispatch_queue> *cq;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedCompositionRepository;
+ (id)defaultSortDescriptors;
+ (id)identityComposition;
+ (id)sharedCompositionRepository:(BOOL)a0;
+ (id)sharedCompositionRepositoryWithOptions:(id)a0;
+ (id)sharedCompositionRepositoryWithRequiredProtocol:(id)a0;

- (id)description;
- (id)initWithOptions:(id)a0;
- (void)reclaimResources;
- (id)compositionWithIdentifier:(id)a0;
- (void)__swapCompositions:(id)a0;
- (id)_cacheFileName;
- (BOOL)_writeCacheFile:(id)a0;
- (id)_readCacheFile;
- (id)_cachedCompositions:(struct __CFDictionary { } *)a0;
- (BOOL)_updateCompositions:(struct __CFDictionary { } *)a0;
- (void)_initCompositionGCDSources;
- (void)_loadAllCompositions;
- (void)_registerProtocols;
- (id)compositionsWithProtocols:(id)a0 andAttributes:(id)a1 sortedBy:(id)a2;
- (id)compositionsWithProtocols:(id)a0 andAttributes:(id)a1;
- (id)allCompositions;
- (void)registerProtocol:(id)a0 withDescription:(id)a1;
- (id)registeredProtocols;
- (id)descriptionForProtocol:(id)a0;
- (BOOL)doesPatch:(id)a0 conformToProtocol:(id)a1;

@end

@class NURenderNodeCache, NURenderResultCache, NSObject, NUScheduler, NUCacheNodeRegistry, NURenderResourcePool, VNSession, NUMLModelRegistry, NSDate, NSString, NURenderPipelineRegistry, NUPurgeableStoragePool, NUSchemaRegistry, NUPlatform;
@protocol NUStorageFactory, OS_dispatch_queue;

@interface NUFactory : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_visionSessionLastUseTime;
}

@property (retain, nonatomic) NUSchemaRegistry *schemaRegistry;
@property (retain, nonatomic) NURenderPipelineRegistry *renderPipelineRegistry;
@property (copy, nonatomic) NSString *defaultNamespace;
@property (retain, nonatomic) NUScheduler *scheduler;
@property (retain, nonatomic) NUPurgeableStoragePool *bufferStoragePool;
@property (retain, nonatomic) NUPurgeableStoragePool *surfaceStoragePool;
@property (retain, nonatomic) id<NUStorageFactory> bufferFactory;
@property (retain, nonatomic) id<NUStorageFactory> surfaceFactory;
@property (retain, nonatomic) NURenderNodeCache *renderNodeCache;
@property (retain, nonatomic) NURenderResultCache *renderResultCache;
@property (retain, nonatomic) NURenderResourcePool *renderResourcePool;
@property (retain, nonatomic) NUPlatform *platform;
@property (retain, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry;
@property (retain, nonatomic) NUMLModelRegistry *modelRegistry;
@property (retain, nonatomic) VNSession *visionSession;

+ (void)shutdownSharedFactory;
+ (void)reset;
+ (void)freeAllResources:(BOOL)a0;
+ (void)reapAllStoragePools;
+ (id)sharedFactory;
+ (BOOL)hasSharedFactory;
+ (void)setSharedFactory:(id)a0;

- (void).cxx_destruct;
- (void)_evictVisionSessionIfNotUsedSince:(id)a0;
- (void)start;
- (void)_scheduleEvictionOfVisionSession;
- (void)_applicationWillBecomeInactive:(id)a0;
- (id)init;
- (void)_evictVisionSession:(id)a0;

@end

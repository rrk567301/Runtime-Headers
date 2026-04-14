@class NSString, NURenderPipelineRegistry, NUPlatform, NUJSContextPool, NUPurgeableStoragePool, NURenderNodeCache, NUCacheNodeRegistry, NUScheduler, CIFilter, NURenderResultCache, NUSchemaRegistry, VNSession;
@protocol NUStorageFactory;

@interface NUFactory : NSObject

@property (retain, nonatomic) NUSchemaRegistry *schemaRegistry;
@property (retain, nonatomic) NURenderPipelineRegistry *renderPipelineRegistry;
@property (copy, nonatomic) NSString *defaultNameSpace;
@property (retain, nonatomic) NUScheduler *scheduler;
@property (retain, nonatomic) NUPurgeableStoragePool *bufferStoragePool;
@property (retain, nonatomic) NUPurgeableStoragePool *surfaceStoragePool;
@property (retain, nonatomic) id<NUStorageFactory> bufferFactory;
@property (retain, nonatomic) id<NUStorageFactory> surfaceFactory;
@property (retain, nonatomic) NURenderNodeCache *renderNodeCache;
@property (retain, nonatomic) NURenderResultCache *renderResultCache;
@property (retain, nonatomic) NUPlatform *platform;
@property (retain, nonatomic) NUJSContextPool *sharedJavaScriptContextPool;
@property (retain, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry;
@property (retain, nonatomic) CIFilter *repairMLFilter;
@property (retain, nonatomic) VNSession *visionSession;

+ (void)reset;
+ (id)sharedFactory;
+ (void)shutdownSharedFactory;
+ (void)setSharedFactory:(id)a0;
+ (void)reapAllStoragePools;
+ (BOOL)hasSharedFactory;
+ (void)freeAllResources:(BOOL)a0;

- (void).cxx_destruct;
- (void)start;

@end

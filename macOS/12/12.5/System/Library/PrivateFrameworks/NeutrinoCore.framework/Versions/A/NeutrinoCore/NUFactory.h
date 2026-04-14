@class NSString, NUPlatform, NURenderPipelineRegistry, NUJSContextPool, NUPurgeableStoragePool, NURenderNodeCache, NUCacheNodeRegistry, NUScheduler, CIFilter, NUSchemaRegistry;
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
@property (retain, nonatomic) NUPlatform *platform;
@property (retain, nonatomic) NUJSContextPool *sharedJavaScriptContextPool;
@property (retain, nonatomic) NUCacheNodeRegistry *cacheNodeRegistry;
@property (retain, nonatomic) CIFilter *repairMLFilter;

+ (void)reset;
+ (id)sharedFactory;
+ (void)setSharedFactory:(id)a0;
+ (void)shutdownSharedFactory;
+ (void)reapAllStoragePools;

- (void).cxx_destruct;
- (void)start;

@end

@class NSArray, NSDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PHImportUrlSource : PHImportSource {
    NSObject<OS_dispatch_queue> *_pendingAssetDataRequestQueue;
    NSObject<OS_dispatch_queue> *_activeAssetDataRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentAssetDataRequestSemaphore;
    NSMutableSet *_accessedURLs;
    NSString *_prefix;
}

@property (retain, nonatomic) NSArray *baseNames;
@property (retain, nonatomic) NSArray *urls;
@property (nonatomic) char isReadonlyVolume;
@property (retain, nonatomic) NSDictionary *resourcePathsByIdentifier;

+ (char)treatAsReadonlyVolume:(id)a0;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (id)path;
- (id)prefix;
- (id)iconSymbolName;
- (id)initWithURLs:(id)a0;
- (char)isAvailable;
- (void)setPrefix:(id)a0;
- (id)volumePath;
- (id)productKind;
- (void)endWork;
- (id)assetsByProcessingItem:(id)a0;
- (void)beginProcessingWithCompletion:(id /* block */)a0;
- (char)canReference;
- (char)containsSupportedMediaWithImportExceptions:(id *)a0;
- (void)dispatchAssetDataRequestAsyncUsingBlock:(id /* block */)a0;
- (char)isEqualToImportUrlSource:(id)a0;
- (id)resourcePathsInUrls:(id)a0;
- (id)rootUrlOfUrls:(id)a0;

@end

@class CKDMMCSEngineContext, NSURL, CKDAssetCache, NSMutableSet;

@interface CKDMMCS : NSObject {
    NSMutableSet *_trackedItemIDs;
}

@property (nonatomic) BOOL didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) CKDMMCSEngineContext *MMCSEngineContext;
@property (readonly, nonatomic) NSURL *path;
@property (readonly, nonatomic) NSURL *temporaryDirectory;
@property (retain, nonatomic) CKDAssetCache *assetCache;
@property (readonly, nonatomic, getter=getMaxChunkCountForSection) unsigned int maxChunkCountForSection;

+ (id)protocolVersion;
+ (id)zeroSizeFileSignature;
+ (id)protocolHeaders;
+ (id)_userInfoFromMMCSRetryableError:(id)a0;
+ (long long)_commonErrorCodeWithMMCSError:(id)a0;
+ (long long)_errorCodeWithMMCSGetError:(id)a0;
+ (long long)_errorCodeWithMMCSPutError:(id)a0;
+ (long long)_errorCodeWithMMCSRegisterError:(id)a0;
+ (id)_errorWithMMCSError:(id)a0 path:(id)a1 description:(id)a2 operationType:(long long)a3;
+ (id)_errorWithMMCSError:(id)a0 description:(id)a1 operationType:(long long)a2;
+ (id)sharedWrappersByPath;
+ (void)purgeMMCSDirectoryWithPath:(id)a0;
+ (id)MMCSWrapperForApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (void)drop;
- (id)CKStatusReportArray;
- (id)initWithMMCSEngineContext:(id)a0 directoryContext:(id)a1;
- (struct _mmcs_engine { } *)getMMCSEngine;
- (id)_referenceIdentifierFromAssetKey:(id)a0;
- (void)_logMMCSOptions:(id)a0;
- (void)performOperationCleanup;
- (id)_contextToRegisterItemGroup:(id)a0 operation:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)registerItemGroupSet:(id)a0 operation:(id)a1 options:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (id)_contextToGetOrPutChunkKeysItemGroup:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)getChunkKeysItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)_contextToGetItemGroup:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 command:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (id)getItemGroupSet:(id)a0 operation:(id)a1 shouldFetchAssetContentInMemory:(BOOL)a2 options:(id)a3 progress:(id /* block */)a4 command:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)_contextToPutItemGroup:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)putItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)putChunkKeysItemGroupSet:(id)a0 operation:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)_getRegisteredItemsGreaterThan:(unsigned long long)a0 itemIds:(unsigned long long *)a1 itemCount:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)registeredItemCount:(unsigned long long *)a0 error:(id *)a1;
- (void)showRegisteredItems;
- (void)_unregisterItemIDs:(id)a0;
- (void)unregisterItemIDs:(id)a0;
- (id)_contextToPutSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)putSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)_contextToGetSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (id)getSectionItem:(id)a0 operation:(id)a1 options:(id)a2 progress:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)startTrackingItemIDsForMMCSItems:(id)a0;
- (void)stopTrackingItemIDsForMMCSItems:(id)a0;
- (BOOL)isTrackingItemID:(unsigned long long)a0;

@end

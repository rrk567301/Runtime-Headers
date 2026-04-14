@class NSString, NSMutableIndexSet, CKDMMCS, NSObject;
@protocol OS_dispatch_queue;

@interface CKDMMCSEngineContext : NSObject {
    NSObject<OS_dispatch_queue> *_mmcsQueue;
    _Atomic unsigned long long _serializedThread;
}

@property (nonatomic) long long refCount;
@property (nonatomic) long long state;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (nonatomic) struct _mmcs_engine { } *MMCSEngine;
@property (retain, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int maxChunkCountForSection;
@property (retain, nonatomic) NSMutableIndexSet *inMemoryItemsIDs;

+ (id)_appID;
+ (id)setupMMCSEngineWithApplicationBundleID:(id)a0 path:(id)a1 wasCached:(BOOL *)a2 error:(id *)a3;
+ (BOOL)hasCachedCKDMMCSEngineContextForPath:(id)a0;
+ (id)sharedContextsByPath;
+ (id)sharedContextsQueue;
+ (BOOL)tearDownMMCSEngineWithContext:(id)a0;

- (unsigned long long)nextAvailableItemID;
- (long long)incRefCount;
- (id)CKPropertiesDescription;
- (BOOL)_setupMMCSEngineWithRetryCount:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_setupMMCSEngineWithError:(id *)a0;
- (id)description;
- (void)MMCSSerializeSyncRecursive:(id /* block */)a0;
- (long long)decRefCount;
- (void)cancelRequestWithContext:(void *)a0;
- (void)MMCSSerializeAsyncRecursive:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithApplicationBundleID:(id)a0 path:(id)a1;
- (void)dealloc;
- (void)_tearDownMMCSEngine;
- (void)assertMMCSSerialized;
- (void)MMCSRunSerialized:(id /* block */)a0;
- (void)stopTrackingItemID:(unsigned long long)a0;

@end

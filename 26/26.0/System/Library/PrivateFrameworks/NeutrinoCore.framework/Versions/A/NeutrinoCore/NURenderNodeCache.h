@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (void)_addNode:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)cachedNodeForNode:(id)a0;
- (id)init;
- (id)description;
- (id)retrieveAndCacheNode:(id)a0;
- (unsigned long long)unhitCacheEntriesCount;
- (void)addNode:(id)a0;
- (void).cxx_destruct;

@end

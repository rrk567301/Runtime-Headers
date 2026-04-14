@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (id)retrieveAndCacheNode:(id)a0;
- (id)cachedNodeForNode:(id)a0;
- (id)description;
- (void)_addNode:(id)a0;
- (void)dealloc;
- (unsigned long long)unhitCacheEntriesCount;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)addNode:(id)a0;
- (id)init;

@end

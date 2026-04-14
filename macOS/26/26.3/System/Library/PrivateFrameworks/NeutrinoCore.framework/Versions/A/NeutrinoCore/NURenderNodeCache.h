@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (void)_addNode:(id)a0;
- (id)debugDescription;
- (id)retrieveAndCacheNode:(id)a0;
- (void)addNode:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)unhitCacheEntriesCount;
- (id)cachedNodeForNode:(id)a0;

@end

@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderNodeCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_cache;
}

+ (id)sharedInstance;

- (void)addNode:(id)a0;
- (id)debugDescription;
- (id)cachedNodeForNode:(id)a0;
- (void)_addNode:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)retrieveAndCacheNode:(id)a0;
- (id)init;
- (unsigned long long)unhitCacheEntriesCount;
- (void)dealloc;

@end

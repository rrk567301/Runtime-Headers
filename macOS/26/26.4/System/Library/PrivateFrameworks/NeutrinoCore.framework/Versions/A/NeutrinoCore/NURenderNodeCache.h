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
- (unsigned long long)unhitCacheEntriesCount;
- (void).cxx_destruct;
- (id)cachedNodeForNode:(id)a0;
- (id)init;
- (void)addNode:(id)a0;
- (id)description;
- (void)dealloc;

@end

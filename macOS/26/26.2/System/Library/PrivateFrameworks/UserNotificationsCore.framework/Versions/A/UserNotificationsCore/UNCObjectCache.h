@class NSHashTable;

@interface UNCObjectCache : NSObject {
    NSHashTable *_cache;
}

- (void).cxx_destruct;
- (id)init;
- (id)cacheObject:(id)a0;

@end

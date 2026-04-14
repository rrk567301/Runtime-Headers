@class MOLRUCache;

@interface MOMediaSectionsCache : NSObject {
    long long _memoryStatus;
    id _memoryPressureMonitor;
    MOLRUCache *_mediaSectionsCache;
}

@property (nonatomic) unsigned long long minCacheCount;
@property (nonatomic) unsigned long long maxCacheCount;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)mediaSectionAtIndex:(unsigned long long)a0;
- (void)_memoryPressureHandler;
- (void)setMediaSection:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeMediaSectionAtIndex:(unsigned long long)a0;
- (void)removeAllMediaSections;

@end

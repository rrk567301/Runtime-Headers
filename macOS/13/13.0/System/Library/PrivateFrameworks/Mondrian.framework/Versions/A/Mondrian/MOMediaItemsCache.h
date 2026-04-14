@class MOLRUCache;

@interface MOMediaItemsCache : NSObject {
    long long _memoryStatus;
    id _memoryPressureMonitor;
    MOLRUCache *_mediaItemsCache;
}

@property (nonatomic) unsigned long long minCacheCount;
@property (nonatomic) unsigned long long maxCacheCount;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)mediaItemAtIndexPath:(id)a0;
- (void)_memoryPressureHandler;
- (void)setMediaItem:(id)a0 atIndexPath:(id)a1;
- (void)removeMediaItemAtIndexPath:(id)a0;
- (void)removeAllMediaItems;

@end

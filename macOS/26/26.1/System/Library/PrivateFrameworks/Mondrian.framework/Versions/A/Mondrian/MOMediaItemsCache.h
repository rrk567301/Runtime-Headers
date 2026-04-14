@class MOLRUCache;

@interface MOMediaItemsCache : NSObject {
    long long _memoryStatus;
    id _memoryPressureMonitor;
    MOLRUCache *_mediaItemsCache;
}

@property (nonatomic) unsigned long long minCacheCount;
@property (nonatomic) unsigned long long maxCacheCount;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_memoryPressureHandler;
- (id)mediaItemAtIndexPath:(id)a0;
- (void)removeAllMediaItems;
- (void)removeMediaItemAtIndexPath:(id)a0;
- (void)setMediaItem:(id)a0 atIndexPath:(id)a1;

@end

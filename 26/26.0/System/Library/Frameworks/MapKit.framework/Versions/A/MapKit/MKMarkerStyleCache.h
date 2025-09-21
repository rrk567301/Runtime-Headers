@class NSCache;

@interface MKMarkerStyleCache : NSObject {
    NSCache *_unselectedCache;
    NSCache *_selectedCache;
    long long _liveMarkerCount;
}

+ (id)sharedCache;

- (void)_purge;
- (void).cxx_destruct;
- (id)_selectedStyleCache;
- (id)_unselectedStyleCache;
- (void)cacheStyle:(id)a0 forConfiguration:(id)a1;
- (id)cachedStyleForConfiguration:(id)a0;
- (void)decrementLiveMarkerCount;
- (void)incrementLiveMarkerCount;

@end

@class NSMutableArray, BWColorLookupCache, NSMutableDictionary;

@interface BWSemanticStyleColorCubeCache : NSObject {
    BWColorLookupCache *_colorLookupCache;
    NSMutableDictionary *_cubeFilterCache;
    NSMutableArray *_recentFilterCacheKeys;
    char _cachingEnabled;
    unsigned long long _cacheMaxSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _filterCacheLock;
}

+ (void)initialize;

- (void)dealloc;
- (id)filtersForSemanticStyle:(id)a0 sceneType:(int)a1 personSegmentationEnabled:(char)a2 maskVisualizationEnabled:(char)a3 applyStyleBackgroundToEntireFrame:(char)a4 filtersToCombine:(id)a5;
- (id)initWithColorLookupCache:(id)a0;

@end

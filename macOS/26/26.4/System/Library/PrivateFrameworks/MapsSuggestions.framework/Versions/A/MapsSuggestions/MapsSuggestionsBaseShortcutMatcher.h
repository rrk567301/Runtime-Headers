@class NSArray, MapsSuggestionsMapsSync, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface MapsSuggestionsBaseShortcutMatcher : NSObject <MapsSuggestionsMapsSyncObserver, MapsSuggestionsShortcutMatcher> {
    NSArray *_shortcuts;
    double _matchingDistance;
    BOOL _hasLoadedShortcuts;
    BOOL _isLoading;
    MapsSuggestionsMapsSync *_mapsSync;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_didUpdateOffloadQueue;
    NSObject<OS_dispatch_group> *_loadingGroup;
}

- (void)mapsSync:(id)a0 didChangeForContentType:(long long)a1;
- (void).cxx_destruct;
- (void)_loadIfNeeded;
- (id)_getShortcuts;
- (BOOL)_hasShortcuts;
- (void)_loadWithHandler:(id /* block */)a0;
- (BOOL)hasShortcutOfType:(long long)a0;
- (id)initWithSync:(id)a0 matchingDistance:(double)a1;
- (id)shortcutForEntry:(id)a0;

@end

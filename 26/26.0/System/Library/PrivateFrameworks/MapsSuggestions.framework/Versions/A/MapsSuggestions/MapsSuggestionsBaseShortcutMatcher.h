@class NSArray, MapsSuggestionsMapsSync, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsBaseShortcutMatcher : NSObject <MapsSuggestionsMapsSyncObserver, MapsSuggestionsShortcutMatcher> {
    NSArray *_shortcuts;
    double _matchingDistance;
    BOOL _hasLoadedShortcuts;
    MapsSuggestionsMapsSync *_mapsSync;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)mapsSync:(id)a0 didChangeForContentType:(long long)a1;
- (void)loadShortcuts;
- (void).cxx_destruct;
- (id)_getShortcuts;
- (BOOL)_hasShortcuts;
- (BOOL)hasShortcutOfType:(long long)a0;
- (id)initWithSync:(id)a0 matchingDistance:(double)a1;
- (id)shortcutForEntry:(id)a0;

@end

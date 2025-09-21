@class NSArray, MapsSuggestionsShortcutManager, NSObject;
@protocol OS_dispatch_group;

@interface MapsSuggestionsShortcutMatcher : NSObject {
    NSArray *_shortcuts;
    double _minimumMatchingDistance;
    NSObject<OS_dispatch_group> *_loadingGroup;
    MapsSuggestionsShortcutManager *_manager;
}

- (void).cxx_destruct;
- (id)shortcuts;
- (char)hasShortcutOfType:(long long)a0;
- (char)hasShortcuts;
- (id)initWithFavorites:(id)a0 minimumMatchingDistance:(double)a1;
- (id)shortcutForEntry:(id)a0;
- (id)shortcutForEntry:(id)a0 type:(long long)a1;

@end

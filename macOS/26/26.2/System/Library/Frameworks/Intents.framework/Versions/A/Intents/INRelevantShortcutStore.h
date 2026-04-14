@class CSSearchableIndex;

@interface INRelevantShortcutStore : NSObject

@property (class, readonly) INRelevantShortcutStore *defaultStore;

@property (readonly) CSSearchableIndex *index;

- (id)initWithSearchableIndex:(id)a0;
- (void)setRelevantShortcuts:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setRelevantShortcuts:(id)a0 forBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;

@end

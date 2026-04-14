@class NSDictionary, ABGroupEntry, NSArray;
@protocol ABGroupEntriesFactory;

@interface ABGroupEntriesList : NSObject {
    NSArray *_groupEntries;
    id<ABGroupEntriesFactory> _groupEntriesFactory;
    BOOL _needsRebuild;
    BOOL _defersRebuild;
}

@property (copy) NSDictionary *groupEntriesByIdentifier;
@property (retain) ABGroupEntry *allDirectoriesGroupEntry;
@property (retain) ABGroupEntry *defaultDirectoryGroupEntry;

- (id)init;
- (void).cxx_destruct;
- (void)rebuildGroupEntries;
- (void)setGroupEntries:(id)a0;
- (id)allContactsGroupEntry;
- (id)groupEntryWithIdentifier:(id)a0;
- (id)initWithGroupEntriesFactory:(id)a0;
- (id)entryForSelectionWithEntry:(id)a0;
- (id)groupEntries;
- (void)performRebuild;
- (void)didRebuildGroupEntries;
- (void)markAsNeedingRebuild;
- (void)setDefersRebuild:(BOOL)a0;
- (void)addGroupEntries:(id)a0 toIndex:(id)a1;
- (void)indexGroupEntriesByIdentifier;
- (id)groupEntryForGroup:(id)a0;
- (id)groupEntryForAccount:(id)a0;
- (id)groupEntriesForAccountIdentifier:(id)a0;
- (id)depthFirstSearchWithGroupEntries:(id)a0 comparator:(id /* block */)a1;
- (id)depthFirstSearchWithComparator:(id /* block */)a0;
- (void)willRemoveGroup:(id)a0;

@end

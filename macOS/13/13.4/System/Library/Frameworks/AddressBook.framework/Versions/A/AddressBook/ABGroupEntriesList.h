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
- (id)allContactsGroupEntry;
- (id)entryForSelectionWithEntry:(id)a0;
- (id)groupEntries;
- (id)groupEntryWithIdentifier:(id)a0;
- (id)initWithGroupEntriesFactory:(id)a0;
- (void)rebuildGroupEntries;
- (void)setGroupEntries:(id)a0;
- (id)depthFirstSearchWithComparator:(id /* block */)a0;
- (void)addGroupEntries:(id)a0 toIndex:(id)a1;
- (id)depthFirstSearchWithGroupEntries:(id)a0 comparator:(id /* block */)a1;
- (void)didRebuildGroupEntries;
- (id)groupEntriesForAccountIdentifier:(id)a0;
- (id)groupEntryForAccount:(id)a0;
- (id)groupEntryForGroup:(id)a0;
- (void)indexGroupEntriesByIdentifier;
- (void)markAsNeedingRebuild;
- (void)performRebuild;
- (void)setDefersRebuild:(BOOL)a0;
- (void)willRemoveGroup:(id)a0;

@end

@class NSMutableDictionary, EKEventStore, NSMutableSet, EKChangeListener;

@interface CUIKEditingManager : NSObject {
    NSMutableSet *_hiddenObjects;
    NSMutableDictionary *_uuidAliases;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) EKEventStore *eventStore;
@property (retain) NSMutableSet *editingContextGroups;
@property (retain) EKChangeListener *changeListener;
@property (retain) NSMutableDictionary *changeHistory;
@property (retain) NSMutableDictionary *changedObjectMap;

- (void).cxx_destruct;
- (void)unhide:(id)a0;
- (void)hide:(id)a0;
- (id)eventsMatchingPredicate:(id)a0;
- (id)initWithEventStore:(id)a0;
- (id)remindersMatchingPredicate:(id)a0;
- (id)eventWithIdentifier:(id)a0;
- (id)eventsWithIdentifiers:(id)a0;
- (void)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)remindersWithExternalIdentifier:(id)a0;
- (char)closeEditingContext:(id)a0;
- (char)closeEditingContext:(id)a0 shouldClose:(char *)a1;
- (char)closeEditingContextAndCommitChanges:(id)a0;
- (char)closeEditingContextWithoutCommittingChanges:(id)a0;
- (char)commitChangesFromEditingContextWithoutClosing:(id)a0;
- (id)openEditingContextWithObject:(id)a0 interfaceType:(unsigned long long)a1;
- (id)openEditingContextWithObject:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (char)_objectsSupportEditingContexts:(id)a0;
- (id)eventWithAlias:(id)a0;
- (void)_addContextToNewOrExistingGroup:(id)a0;
- (id)_allOpenEditingContexts;
- (char)_changesExistForObject:(id)a0;
- (char)_closeEditingContext:(id)a0 action:(unsigned long long)a1 condition:(unsigned long long)a2 shouldClose:(char *)a3;
- (char)_commitChangesForContext:(id)a0 forceCommit:(char)a1 shouldClose:(char *)a2;
- (id)_liveEditedObjectsMatchingPredicate:(id)a0 notInSet:(id)a1;
- (id)_objectsWithLiveEdits:(id)a0 matchingPredicate:(id)a1;
- (id)_openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (void)addAlias:(id)a0 eventIdentifier:(id)a1;
- (void)applyLiveChangesToObject:(id)a0;
- (void)applyLiveChangesToObjects:(id)a0;
- (id)changedObjectsCopy;
- (void)clearAllLiveChanges;
- (void)clearLiveChangesForObjects:(id)a0;
- (char)closeEditingContextAndRevertIfLast:(id)a0;
- (id)eventsWithExternalIdentifier:(id)a0;
- (void)fetchEventsMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (char)isHidden:(id)a0;
- (id)openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1;
- (id)openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (void)partialSaveObject:(id)a0;
- (void)performWithLock:(id /* block */)a0;

@end

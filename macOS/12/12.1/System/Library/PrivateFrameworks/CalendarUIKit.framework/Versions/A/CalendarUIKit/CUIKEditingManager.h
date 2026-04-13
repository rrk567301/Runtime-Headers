@class NSMutableDictionary, EKEventStore, NSMutableSet, EKChangeListener, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKEditingManager : NSObject

@property (weak) EKEventStore *eventStore;
@property (retain) NSMutableSet *editingContextGroups;
@property (retain) EKChangeListener *changeListener;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSMutableDictionary *changeHistory;
@property (retain) NSMutableDictionary *changedObjectMap;

- (void).cxx_destruct;
- (id)allEvents;
- (id)initWithEventStore:(id)a0;
- (id)eventsMatchingPredicate:(id)a0;
- (void)fetchEventsMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)reminderWithIdentifier:(id)a0;
- (id)allReminders;
- (id)remindersWithExternalIdentifier:(id)a0;
- (id)eventsWithExternalIdentifier:(id)a0;
- (id)remindersMatchingPredicate:(id)a0;
- (void)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)eventWithIdentifier:(id)a0;
- (id)remindersWithIdentifiers:(id)a0;
- (id)eventsWithIdentifiers:(id)a0;
- (id)openEditingContextWithObject:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (BOOL)closeEditingContextAndCommitChanges:(id)a0;
- (BOOL)closeEditingContextWithoutCommittingChanges:(id)a0;
- (BOOL)commitChangesFromEditingContextWithoutClosing:(id)a0;
- (BOOL)closeEditingContext:(id)a0 shouldClose:(BOOL *)a1;
- (void)clearLiveChangesForObjects:(id)a0;
- (void)partialSaveObject:(id)a0;
- (id)openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1;
- (BOOL)closeEditingContext:(id)a0;
- (id)openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (BOOL)_objectsSupportEditingContexts:(id)a0;
- (id)_openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (void)_addContextToNewOrExistingGroup:(id)a0;
- (void)applyLiveChangesToObject:(id)a0;
- (BOOL)_changesExistForObject:(id)a0;
- (id)_liveEditedObjectsMatchingPredicate:(id)a0 notInSet:(id)a1;
- (id)changedObjectsCopy;
- (void)applyLiveChangesToObjects:(id)a0;
- (id)_objectsWithLiveEdits:(id)a0 matchingPredicate:(id)a1;
- (BOOL)_closeEditingContext:(id)a0 forceCommit:(BOOL)a1 forceDontCommit:(BOOL)a2 shouldClose:(BOOL *)a3;
- (BOOL)_commitChangesForContext:(id)a0 forceCommit:(BOOL)a1 shouldClose:(BOOL *)a2;
- (id)openEditingContextWithObject:(id)a0 interfaceType:(unsigned long long)a1;
- (void)clearAllLiveChanges;
- (id)_allOpenEditingContexts;

@end

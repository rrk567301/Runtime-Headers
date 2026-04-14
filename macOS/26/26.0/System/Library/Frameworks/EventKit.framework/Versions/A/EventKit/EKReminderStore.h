@class NSString, NSArray, NSMutableDictionary, REMStore, NSMutableSet, EKEventStore, NSObject, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sources;
    NSMutableDictionary *_cachedConstraints;
    NSArray *_lists;
    NSMutableSet *_newObjectsIDs;
    NSMutableDictionary *_updatedObjects;
    NSMutableSet *_objectIDsToCommit;
    NSMutableDictionary *_deletedObjects;
    NSMutableArray *_objectsToReset;
    NSMutableArray *_remindersNeedingMove;
    NSMutableDictionary *_movedRemindersIDMap;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *queryCompletionHandlers;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) REMStore *remStore;
@property (readonly, weak) EKEventStore *eventStore;
@property (readonly) NSArray *sources;
@property (readonly) NSArray *calendars;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)frozenClassForReminderClass:(Class)a0;
+ (BOOL)isNotFoundError:(id)a0;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)sourceWithIdentifier:(id)a0;
- (void)fillInPath:(id)a0 usingParents:(id)a1;
- (id)createNewReminderCalendar;
- (id)remindersMatchingPredicate:(id)a0;
- (void)_loadAccountsIfNeeded;
- (void)reset;
- (id)existingUpdatedObject:(id)a0;
- (void)_checkPredicate:(id)a0;
- (id)defaultCalendarForNewReminders;
- (id /* block */)completionBlockForFetchRequestToken:(id)a0 remove:(BOOL)a1;
- (void)_loadAccounts;
- (BOOL)isSourceManaged:(id)a0;
- (id)reminderWithUniqueId:(id)a0;
- (id)initWithEventStore:(id)a0 token:(id)a1;
- (id)createNewReminder;
- (id)resetBackingLocationWithBackingLocation:(id)a0;
- (id)newFrozenObjectForReminderObject:(id)a0 withChanges:(id)a1;
- (id)_fetchAndCacheConstraintsForFrozenSource:(id)a0;
- (id)cachedConstraintsForSource:(id)a0;
- (BOOL)commit:(id *)a0;
- (void)remindersChanged;
- (id)_allLists;
- (void)_loadListsIfNeeded;
- (BOOL)removeReminder:(id)a0 error:(id *)a1;
- (id)reminderWithIdentifier:(id)a0;
- (id)predicateForRemindersInCalendars:(id)a0;
- (BOOL)saveReminder:(id)a0 error:(id *)a1;
- (BOOL)removeCalendar:(id)a0 error:(id *)a1;
- (id)_moveRemindersToNewLists:(id)a0 error:(id *)a1;
- (id)calendarWithIdentifier:(id)a0;
- (id)remindersWithExternalIdentifier:(id)a0;
- (id)resetBackingAlarmWithBackingAlarm:(id)a0;
- (id)predicateForCompletedRemindersWithCompletionDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;
- (id)predicateForCalendarStoreForRemindersInCalendars:(id)a0;
- (void)_loadLists;
- (id)frozenAlarmForREMAlarms:(id)a0;
- (id)frozenCalendarFromCalendar:(id)a0 error:(id *)a1;
- (BOOL)saveCalendar:(id)a0 error:(id *)a1;
- (void)_reminderCopiedToNewList:(id)a0;
- (id)frozenObjectForReminderObject:(id)a0;
- (BOOL)_commit:(id *)a0 error:(id *)a1;
- (id)backingCalendarWithIdentifier:(id)a0;
- (id)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (BOOL)saveObject:(id)a0 withFrozenObject:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)backingReminderWithIdentifier:(id)a0;
- (id)predicateForIncompleteRemindersWithDueDateStarting:(id)a0 ending:(id)a1 calendars:(id)a2;

@end

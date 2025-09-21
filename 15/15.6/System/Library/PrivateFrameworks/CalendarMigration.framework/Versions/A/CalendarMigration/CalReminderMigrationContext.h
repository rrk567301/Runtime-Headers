@class REMObjectID, NSString, NSMutableDictionary, NSDictionary, REMStore, NSMutableArray, REMSaveRequest, REMAccountChangeItem, REMAccount;
@protocol CalReminderKitProvider, CalReminderKitDatabaseMigrationContext;

@interface CalReminderMigrationContext : NSObject {
    id<CalReminderKitDatabaseMigrationContext> _remDatabaseMigrationContext;
    REMStore *_reminderStore;
    REMSaveRequest *_saveRequest;
    REMAccountChangeItem *_localAccountChangeItem;
    NSMutableArray *_orderedListChangeItemsStack;
    char _accountsLoaded;
    NSDictionary *_accountsForAccountIdentifiers;
    REMAccount *_localAccount;
    NSMutableDictionary *_accountChangeItemsForAccountIdentifiers;
    char _recordedAnyFatalFailures;
}

@property (readonly, nonatomic) id<CalReminderKitProvider> reminderKitProvider;
@property (readonly, nonatomic) char shouldPerformMigration;
@property (readonly, nonatomic) char shouldDeleteMigratedData;
@property (readonly, nonatomic) REMSaveRequest *saveRequest;
@property (readonly, nonatomic) REMAccountChangeItem *localAccountChangeItem;
@property (retain, nonatomic) NSString *defaultListOriginalIdentifier;
@property (readonly, nonatomic) REMObjectID *defaultListMigratedIdentifier;
@property (readonly, nonatomic) char isCurrentOrderedListItemsContextEmpty;

- (void).cxx_destruct;
- (char)_setup;
- (void)_loadAccountsIfNeeded;
- (id)reminderStore;
- (char)ensureAccountsExist:(id)a0;
- (void)_didEndMigrationWithSuccess:(char)a0;
- (id)_initWithReminderKitProvider:(id)a0;
- (void)_sortAddedReminderListsInAccountChangeItem:(id)a0;
- (id)_sortedAddedListChangeItems;
- (char)_tryBeginMigration;
- (void)_verifyAccountHasNoLists:(id)a0 withAccountIdentifier:(id)a1;
- (void)_willBeginMigration;
- (id)accountsForAccountIdentifiers;
- (id)existingAccountChangeItemWithAccountIdentifier:(id)a0;
- (char)finishMigrationWithSave:(char)a0;
- (void)popOrderedListItemsContextAndSortListsInAccountChangeItem:(id)a0;
- (void)pushOrderedListItemsContext;
- (void)recordAddedListChangeItem:(id)a0 withOriginalIdentifier:(id)a1 order:(id)a2;
- (void)recordMigrationFailureWithDescription:(id)a0 inStage:(unsigned long long)a1 underlyingError:(id)a2;
- (void)recordMigrationFailureWithDescription:(id)a0 inStage:(unsigned long long)a1 underlyingError:(id)a2 relatedTo:(id)a3;
- (void)recordMigrationFailureWithDescription:(id)a0 inStage:(unsigned long long)a1 underlyingError:(id)a2 relatedTo:(id)a3 isFatal:(char)a4;

@end

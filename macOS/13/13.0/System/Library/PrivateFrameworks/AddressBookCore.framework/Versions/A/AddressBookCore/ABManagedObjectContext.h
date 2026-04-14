@class ABAddressBook;
@protocol ABAddressBookReference, ABAccountCollection;

@interface ABManagedObjectContext : NSManagedObjectContext {
    id<ABAddressBookReference> _owningAddressBook;
}

@property ABAddressBook *owningAddressBook;
@property (retain) id<ABAccountCollection> ab_accountCollection;
@property int aggregateMultiValueMode;
@property BOOL writeChangesToServer;
@property BOOL sendsChangeNotifications;
@property BOOL unlockOnDealloc;

+ (id)abUniqueIDsPredicate:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)deleteObject:(id)a0;
- (BOOL)save:(id *)a0;
- (id)initWithConcurrencyType:(unsigned long long)a0;
- (id)updatedContacts;
- (id)deletedContacts;
- (BOOL)isMemoryBacked;
- (id)contactsWithLinkIdentifier:(id)a0;
- (id)myContact;
- (void)refreshRecords:(id)a0;
- (void)_refreshObjectsRelatedToObject:(id)a0;
- (void)ab_tryRefreshRelationshipWithName:(id)a0 description:(id)a1 forObject:(id)a2;
- (void)preheatContacts:(id)a0;
- (void)preheatContacts:(id)a0 keyPaths:(id)a1;
- (void)preheatGroups:(id)a0;
- (void)preheatGroups:(id)a0 keyPaths:(id)a1;
- (void)logCallStack:(id)a0;
- (BOOL)abMeCardHasChanged;
- (id)insertedContacts;
- (id)_arrayOfContactsFromSet:(id)a0;
- (void)linkContact:(id)a0 toContact:(id)a1;
- (void)unlinkContact:(id)a0;
- (void)setContactPreferredForLinkedName:(id)a0;
- (void)setContactPreferredForLinkedName:(id)a0 forLinkedContacts:(id)a1;
- (void)setContactPreferredForLinkedPhoto:(id)a0;
- (void)setContactPreferredForLinkedPhoto:(id)a0 forLinkedContacts:(id)a1;
- (void)_setContact:(id)a0 preferredForLinkProperty:(id)a1;
- (void)_setContact:(id)a0 preferredForLinkProperty:(id)a1 linkedContacts:(id)a2;
- (id)abContactsForUniqueIDs:(id)a0;
- (id)abContactsForUniqueIDs:(id)a0 affectedStores:(id)a1;
- (id)abContactsForPredicate:(id)a0;
- (id)abContactsForPredicate:(id)a0 affectedStores:(id)a1;
- (id)abGroupsForUniqueIDs:(id)a0;
- (id)abGroupsForPredicate:(id)a0;
- (id)abObjectsForPredicate:(id)a0 entityName:(id)a1;
- (id)abObjectsForPredicate:(id)a0 entityName:(id)a1 affectedStores:(id)a2;
- (id)abObjectsForPredicate:(id)a0 entityName:(id)a1 affectedStores:(id)a2 asFaults:(BOOL)a3;
- (void)_updateLinkingInformation;
- (void)_ab_touchRecords;
- (id)_ab_deletedRecords;
- (void)_ab_markRecordsForDeletion:(id)a0;
- (void)_ab_sendAssistantChangeNotificationsForInsertedIdentifiers:(id)a0 updatedIdentifiers:(id)a1 deletedIdentifiers:(id)a2;

@end

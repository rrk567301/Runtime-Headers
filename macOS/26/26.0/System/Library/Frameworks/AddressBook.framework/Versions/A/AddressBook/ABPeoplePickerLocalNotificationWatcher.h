@class ABGroupEntriesList, ABPersonListController, ABAddressBook;

@interface ABPeoplePickerLocalNotificationWatcher : NSObject {
    ABAddressBook *_addressBook;
    ABGroupEntriesList *_groupEntriesList;
    ABPersonListController *_personListController;
}

- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (void)invalidate;
- (void)managedObjectContextDidSave:(id)a0;
- (void).cxx_destruct;
- (void)accountRepositoryDidChange:(id)a0;
- (void)addressBookChanged:(id)a0;
- (void)addressBookDidReset:(id)a0;
- (void)addressBookWillReset:(id)a0;
- (BOOL)anyGroupChanged:(id)a0;
- (id)identifiersForRecords:(id)a0;
- (id)initWithAddressBook:(id)a0 groupEntriesList:(id)a1 personListController:(id)a2;
- (void)updateUserInterfaceWithContextDidUpdateNotification:(id)a0;

@end

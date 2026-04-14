@class ABAddressBook, ABGroupListNotificationHandler, NSMutableArray, ABPersonListUIReflector;

@interface CNContactPickerNotificationWatcher : NSObject {
    ABGroupListNotificationHandler *_groupListHandler;
    ABPersonListUIReflector *_personListReflector;
    ABAddressBook *_addressBook;
    NSMutableArray *_observers;
}

- (void)managedObjectContextDidSave:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)registerForLocalNotifications;
- (void)accountRepositoryDidChange:(id)a0;
- (void)accountConfigurationDidChange:(id)a0;
- (void)addressBookChangedExternally:(id)a0;
- (id)initWithGroupListHandler:(id)a0 personListReflector:(id)a1 addressBook:(id)a2;
- (BOOL)isNotificationFromDirectorySearch:(id)a0;
- (void)registerForExternalNotifications;
- (BOOL)shouldProcessNotification:(id)a0;

@end

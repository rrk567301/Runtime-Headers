@class ABCardViewNotificationHandler;

@interface ABPersonViewNotificationWatcher : NSObject {
    ABCardViewNotificationHandler *_cardViewNotificationHandler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)registerForExternalNotifications;
- (void)addressBookChangedExternally:(id)a0;
- (void)removeNotificationObservers;
- (void)registerForLocalNotificationsWithAddressBook:(id)a0;
- (void)managedObjectContextObjectsDidChange:(id)a0;
- (id)initWithCardViewNotificationHandler:(id)a0;
- (void)registerForNotificationsWithAddressBook:(id)a0;

@end

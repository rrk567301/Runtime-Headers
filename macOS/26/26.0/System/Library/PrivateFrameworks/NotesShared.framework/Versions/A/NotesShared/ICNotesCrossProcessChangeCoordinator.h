@class NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol NSObject;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;
@property (retain, nonatomic) id<NSObject> accountsNotificationsObserver;

- (void)dealloc;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (id)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)a0;
- (id)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void)postCrossProcessNotificationName:(id)a0;
- (void)postEditorExtensionDidSaveNotification;
- (void)removeCrossProcessNotificationObserver:(id)a0;
- (id)registerForAccountNotifications;
- (void)postAccountDidChangeNotification;
- (void).cxx_destruct;

@end

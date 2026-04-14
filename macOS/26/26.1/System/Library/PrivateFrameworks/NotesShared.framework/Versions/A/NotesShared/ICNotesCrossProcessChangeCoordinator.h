@class NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol NSObject;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;
@property (retain, nonatomic) id<NSObject> accountsNotificationsObserver;

- (void)removeCrossProcessNotificationObserver:(id)a0;
- (void)postAccountDidChangeNotification;
- (void)postCrossProcessNotificationName:(id)a0;
- (id)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)a0;
- (void)dealloc;
- (void)postEditorExtensionDidSaveNotification;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void).cxx_destruct;
- (id)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (id)registerForAccountNotifications;

@end

@class NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol NSObject;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;
@property (retain, nonatomic) id<NSObject> accountsNotificationsObserver;

- (id)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)a0;
- (void)postCrossProcessNotificationName:(id)a0;
- (id)registerForAccountNotifications;
- (id)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void)postEditorExtensionDidSaveNotification;
- (void)postAccountDidChangeNotification;
- (void)removeCrossProcessNotificationObserver:(id)a0;
- (void).cxx_destruct;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void)dealloc;

@end

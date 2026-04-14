@class NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol NSObject;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;
@property (retain, nonatomic) id<NSObject> accountsNotificationsObserver;

- (id)registerForAccountNotifications;
- (void)postCrossProcessNotificationName:(id)a0;
- (id)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (void)removeCrossProcessNotificationObserver:(id)a0;
- (id)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)a0;
- (void)postAccountDidChangeNotification;
- (void)postEditorExtensionDidSaveNotification;
- (void)dealloc;

@end

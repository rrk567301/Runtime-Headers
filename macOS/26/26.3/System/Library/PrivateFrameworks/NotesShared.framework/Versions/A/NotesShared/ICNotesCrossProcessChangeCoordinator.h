@class NSManagedObjectContext, NSPersistentStoreCoordinator;
@protocol NSObject;

@interface ICNotesCrossProcessChangeCoordinator : NSObject

@property (retain, nonatomic) NSPersistentStoreCoordinator *sourceCoordinator;
@property (retain, nonatomic) NSManagedObjectContext *destinationContext;
@property (retain, nonatomic) id<NSObject> accountsNotificationsObserver;

- (id)registerForCrossProcessNotificationName:(id)a0 block:(id /* block */)a1;
- (void)postEditorExtensionDidSaveNotification;
- (void)postCrossProcessNotificationName:(id)a0;
- (void)postAccountDidChangeNotification;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeCrossProcessNotificationObserver:(id)a0;
- (id)initWithSourceCoordinator:(id)a0 destinationContext:(id)a1;
- (id)registerForEditorExtensionDidSaveNotificationWithBlock:(id /* block */)a0;
- (id)registerForAccountNotifications;

@end

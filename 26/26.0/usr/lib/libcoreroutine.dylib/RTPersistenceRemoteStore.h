@class NSManagedObjectID, RTDarwinNotificationHelper, NSPersistentStoreCoordinator;

@interface RTPersistenceRemoteStore : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_currentDeviceManagedObjectId;
    RTDarwinNotificationHelper *_notificationHelper;
}

- (id)createManagedObjectContext;
- (id)init;
- (id)initWithReadOnly:(BOOL)a0;
- (void).cxx_destruct;
- (id)_createManagedObjectContext;
- (void)updateCurrentDeviceMOIDWithContext:(id)a0;

@end

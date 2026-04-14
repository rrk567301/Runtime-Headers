@class NSManagedObjectID, RTDarwinNotificationHelper, NSPersistentStoreCoordinator;

@interface RTPersistenceRemoteStore : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_currentDeviceManagedObjectId;
    RTDarwinNotificationHelper *_notificationHelper;
}

- (id)createManagedObjectContext;
- (void).cxx_destruct;
- (id)initWithReadOnly:(BOOL)a0;
- (id)init;
- (id)_createManagedObjectContext;
- (void)updateCurrentDeviceMOIDWithContext:(id)a0;

@end

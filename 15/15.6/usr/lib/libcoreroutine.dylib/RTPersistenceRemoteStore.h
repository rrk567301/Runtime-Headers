@class NSManagedObjectID, RTDarwinNotificationHelper, NSPersistentStoreCoordinator;

@interface RTPersistenceRemoteStore : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_currentDeviceManagedObjectId;
    RTDarwinNotificationHelper *_notificationHelper;
}

- (id)init;
- (void).cxx_destruct;
- (id)_createManagedObjectContext;
- (id)createManagedObjectContext;
- (id)initWithReadOnly:(char)a0;
- (void)updateCurrentDeviceMOIDWithContext:(id)a0;

@end

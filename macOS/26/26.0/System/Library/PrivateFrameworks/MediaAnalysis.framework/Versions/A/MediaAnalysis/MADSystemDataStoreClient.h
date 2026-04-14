@class NSPersistentStoreCoordinator;

@interface MADSystemDataStoreClient : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (id)readOnlyClient;

- (id)persistentStoreCoordinator;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_configureXPCPersistentStoreCoordinatorWithReadOnlyMode:(BOOL)a0;

@end

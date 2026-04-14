@class NSPersistentStoreCoordinator;

@interface MADSystemDataStoreClient : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

+ (id)readOnlyClient;

- (id)persistentStoreCoordinator;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_configureXPCPersistentStoreCoordinatorWithReadOnlyMode:(BOOL)a0;

@end

@class NSMapTable;

@interface HMDCompositeSettingsOwnerToDatabaseAdapterRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_settingOwnerToDatabaseAdapterTable;
}

- (void)createDatabaseAdapterIfNotExistForUUID:(id)a0 homeUUID:(id)a1 accessory:(id)a2 workQueue:(id)a3 zoneName:(id)a4;
- (void).cxx_destruct;
- (void)removeZoneWithZoneName:(id)a0 uuid:(id)a1 workQueue:(id)a2;
- (id)init;
- (id)databaseAdapterForUUID:(id)a0;

@end

@class NSMapTable;

@interface HMDCompositeSettingsOwnerToZoneManagerRegistry : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_settingOwnerToZoneManagerTable;
}

- (id)init;
- (void).cxx_destruct;
- (void)createZoneManagerIfNotExistForUUID:(id)a0 workQueue:(id)a1 zoneName:(id)a2;
- (id)zoneManagerForUUID:(id)a0;
- (void)removeZoneWithZoneName:(id)a0 uuid:(id)a1 workQueue:(id)a2;

@end

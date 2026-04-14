@class NSMutableSet, CPProfileManager;

@interface CWFConfigurationProfileManager : NSObject {
    CPProfileManager *_profileManager;
    NSMutableSet *_mdmManagedProfileUUIDs;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)__updateCachedMDMManagedProfileUUIDs:(id)a0;
- (BOOL)isDeviceSupervised;
- (BOOL)isNetworkManagedByMDM:(id)a0;

@end

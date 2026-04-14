@class NSMutableSet, CPProfileManager;

@interface CWFConfigurationProfileManager : NSObject {
    CPProfileManager *_profileManager;
    NSMutableSet *_mdmManagedProfileUUIDs;
}

- (void)invalidate;
- (id)init;
- (void)activate;
- (void).cxx_destruct;
- (void)__updateCachedMDMManagedProfileUUIDs:(id)a0;
- (BOOL)isDeviceSupervised;
- (BOOL)isNetworkManagedByMDM:(id)a0;

@end

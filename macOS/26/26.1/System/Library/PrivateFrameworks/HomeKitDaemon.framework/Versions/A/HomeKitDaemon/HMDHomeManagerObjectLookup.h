@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup

@property (weak) HMDHomeManager *homeManager;

+ (id)logCategory;

- (id)initWithHomeManager:(id)a0;
- (void)_scanHomes;
- (void)_scanAccounts;
- (void)scanObjects;
- (void).cxx_destruct;
- (void)_scanCloudZones;

@end

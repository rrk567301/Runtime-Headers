@class HMDHomeManager;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup

@property (weak) HMDHomeManager *homeManager;

+ (id)logCategory;

- (void)scanObjects;
- (id)initWithHomeManager:(id)a0;
- (void)_scanCloudZones;
- (void).cxx_destruct;
- (void)_scanHomes;
- (void)_scanAccounts;

@end

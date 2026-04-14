@class NSUUID, NSString, HMMTROperationalFabricData;

@interface HMDCHIPSharedHomeKeychainFabricDataStore : HMFObject

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSString *iCloudIdentifier;
@property (copy, nonatomic) HMMTROperationalFabricData *fabricData;

+ (id)logCategory;

- (id)systemKeychainStore;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)fabricData;
- (id)initWithHomeUUID:(id)a0 iCloudIdentifier:(id)a1;
- (id)keychainItemIdentifier;
- (void)removeFabricData;
- (BOOL)storeFabricData:(id)a0;
- (BOOL)storeNewKeychainItemWithFabricData:(id)a0;
- (id)unarchiveKeyItemValue:(id)a0;

@end

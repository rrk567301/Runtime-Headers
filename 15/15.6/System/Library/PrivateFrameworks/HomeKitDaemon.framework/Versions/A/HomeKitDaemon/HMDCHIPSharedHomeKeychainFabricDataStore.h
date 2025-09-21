@class NSUUID, NSString, HMMTROperationalFabricData;

@interface HMDCHIPSharedHomeKeychainFabricDataStore : HMFObject

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSString *iCloudIdentifier;
@property (copy, nonatomic) HMMTROperationalFabricData *fabricData;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id)fabricData;
- (id)initWithHomeUUID:(id)a0 iCloudIdentifier:(id)a1;
- (id)keychainItemIdentifier;
- (void)removeFabricData;
- (char)storeFabricData:(id)a0;
- (char)storeNewKeychainItemWithFabricData:(id)a0;
- (id)systemKeychainStore;
- (id)unarchiveKeyItemValue:(id)a0;

@end

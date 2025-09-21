@class NSArray, NSDictionary, HMDHome, HMDAccessory, NSString, HMDMatterPath;

@interface HMDMatterCommand : HMFObject <HMFLogging>

@property (readonly, weak) HMDHome *home;
@property (copy, nonatomic) NSDictionary *commandFields;
@property (copy, nonatomic) NSArray *expectedValues;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) HMDMatterPath *matterPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)new;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)initWithDictionary:(id)a0 home:(id)a1;
- (void)addMatterPathToTransactionIfNotStored:(id)a0;
- (id)associatedAccessories;
- (id)dictionaryRepresentationWithEncodedValues:(char)a0;
- (id)initWithUUID:(id)a0 matterPath:(id)a1 commandFields:(id)a2 expectedValues:(id)a3 home:(id)a4;
- (char)isAssociatedWithAccessory:(id)a0;
- (char)isCommandForMatterPath:(id)a0;

@end

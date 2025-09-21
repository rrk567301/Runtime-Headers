@class NSString, HMDAppleMediaAccessory, NSUUID;

@interface HMDAppleMediaAccessoryPowerAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) HMDAppleMediaAccessory *accessory;
@property (nonatomic) unsigned long long targetSleepWakeState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) Class modelClass;
@property (readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelParentIdentifier;

+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (id)attributeDescriptions;
- (char)requiresDeviceUnlock;
- (id)associatedAccessories;
- (void)executeWithSource:(unsigned long long)a0 clientName:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;
- (id)initWithUUID:(id)a0 accessory:(id)a1 targetSleepWakeState:(unsigned long long)a2 actionSet:(id)a3;
- (char)isAssociatedWithAccessory:(id)a0;
- (char)isCompatibleWithAction:(id)a0;
- (char)isStaleWithAccessory:(id)a0;
- (char)isUnsecuringAction;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)stateDump;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;

@end

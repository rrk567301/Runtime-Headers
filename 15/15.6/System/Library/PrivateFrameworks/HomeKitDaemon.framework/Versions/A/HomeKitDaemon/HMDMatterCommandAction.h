@class NSArray, HMDAccessory, HMDHome, NSDictionary, NSString;
@protocol HMDMatterAccessoryProtocol;

@interface HMDMatterCommandAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, weak) HMDHome *home;
@property (copy, nonatomic) NSArray *commands;
@property (nonatomic) char enforceExecutionOrder;
@property (readonly, weak, nonatomic) HMDAccessory<HMDMatterAccessoryProtocol> *accessory;
@property (readonly, nonatomic) NSDictionary *actionInformation;
@property (readonly, nonatomic) NSString *dumpState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (id)new;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (id)attributeDescriptions;
- (id)matterPathUUIDs;
- (void)_processCommandActionModelUpdated:(id)a0 message:(id)a1;
- (void)addMatterPathsToTransactionIfNotStored:(id)a0;
- (id)associatedAccessories;
- (void)executeWithSource:(unsigned long long)a0 clientName:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithUUID:(id)a0 commands:(id)a1 enforceExecutionOrder:(char)a2 actionSet:(id)a3;
- (char)isActionForMatterPath:(id)a0;
- (char)isAssociatedWithAccessory:(id)a0;
- (char)isCompatibleWithAction:(id)a0;
- (char)isSecureAction;
- (char)isStaleWithAccessory:(id)a0;
- (char)isUnsecuringAction;
- (void)matterPathRemoved:(id)a0 message:(id)a1 transaction:(id)a2;
- (id)matterPaths;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)serializedCommands;
- (id)serializedCommands:(id)a0;
- (id)stateDump;
- (void)transactionObjectRemoved:(id)a0 message:(id)a1;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;

@end

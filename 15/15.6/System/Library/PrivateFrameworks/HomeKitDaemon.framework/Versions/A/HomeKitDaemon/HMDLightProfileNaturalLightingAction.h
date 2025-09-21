@class NSArray, NSUUID, NSNotificationCenter, HMDLightProfile;

@interface HMDLightProfileNaturalLightingAction : HMDAction {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (getter=isNaturalLightingEnabled) char naturalLightingEnabled;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (retain, nonatomic) NSArray *lightServices;
@property (readonly, copy) NSUUID *lightProfileUUID;
@property (retain) HMDLightProfile *lightProfile;

+ (char)supportsSecureCoding;
+ (id)logCategory;
+ (id)actionWithDictionaryRepresentation:(id)a0 actionSet:(id)a1;
+ (id)actionWithDictionaryRepresentation:(id)a0 home:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)type;
- (id)dictionaryRepresentation;
- (Class)modelClass;
- (id)attributeDescriptions;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(char)a2 actionSet:(id)a3;
- (id)associatedAccessories;
- (void)configureWithHome:(id)a0;
- (void)handleAccessoryProfileAddedNotification:(id)a0;
- (id)initWithModelObject:(id)a0 parent:(id)a1 error:(id *)a2;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(char)a2 actionSet:(id)a3 notificationCenter:(id)a4;
- (char)isActionForCharacteristic:(id)a0;
- (char)isAssociatedWithAccessory:(id)a0;
- (char)isCompatibleWithAction:(id)a0;
- (char)isStaleWithAccessory:(id)a0;
- (char)isUnsecuringAction;
- (id)modelObjectWithChangeType:(unsigned long long)a0 version:(long long)a1;
- (id)stateDump;
- (void)transactionObjectUpdated:(id)a0 newValues:(id)a1 message:(id)a2;
- (id)writeRequestForTransitionStartWithLightProfile:(id)a0 startDate:(id)a1 type:(unsigned long long)a2;

@end

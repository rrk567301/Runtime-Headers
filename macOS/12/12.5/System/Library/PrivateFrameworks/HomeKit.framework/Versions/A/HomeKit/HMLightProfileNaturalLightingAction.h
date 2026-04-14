@class HMLightProfile, NSUUID, NSString, NSArray;

@interface HMLightProfileNaturalLightingAction : HMAction <NSSecureCoding, HMObjectMerge, HMFLogging, HMFObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isNaturalLightingEnabled) BOOL naturalLightingEnabled;
@property (retain) HMLightProfile *lightProfile;
@property (readonly) NSUUID *lightProfileUUID;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)new;
+ (id)shortDescription;
+ (id)logCategory;
+ (id)_actionWithInfo:(id)a0 home:(id)a1;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithUUID:(id)a0;
- (BOOL)_handleUpdates:(id)a0;
- (id)logIdentifier;
- (id)_serializeForAdd;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)encodeAsProtoBuf;
- (void)__configureWithContext:(id)a0 actionSet:(id)a1;
- (id)initWithUUID:(id)a0 lightProfileUUID:(id)a1 naturalLightingEnabled:(BOOL)a2;
- (id)initWithLightProfile:(id)a0 naturalLightingEnabled:(BOOL)a1;
- (id)initWithPBNaturalLightingAction:(id)a0 home:(id)a1;
- (void)updateNaturalLightingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;

@end

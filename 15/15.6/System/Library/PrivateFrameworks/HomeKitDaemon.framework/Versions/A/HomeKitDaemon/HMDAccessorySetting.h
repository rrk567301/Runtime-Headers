@class NSUUID, NSString, NSArray, HMDAccessorySettingModel, HMFMessageDispatcher, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDAccessorySetting : HMFObject <HMFLogging, HMDAccessorySettingUpdateProtocol, HMDAccessorySettingProtocol, NSSecureCoding, HMDSettingBaseProtocol> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_inMemoryCachedConstraintRemovals;
    NSMutableArray *_inMemoryCachedConstraints;
    NSMutableArray *_constraints;
    id _value;
    NSString *_name;
    long long _type;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDAccessorySettingModel *model;
@property (readonly, copy) NSArray *models;
@property (nonatomic) unsigned long long configurationVersion;
@property (readonly) char isCollectionType;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) unsigned long long properties;
@property (readonly) NSString *keyPath;
@property (getter=isReflected) char reflected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long type;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *constraints;
@property (readonly, copy) id value;
@property (readonly, copy) NSUUID *parentIdentifier;

+ (id)logCategory;
+ (id)supportedConstraintClasses;
+ (id)supportedValueClasses;
+ (id)decodedValue:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setGroup:(id)a0;
- (void)setValue:(id)a0;
- (void)_setType:(long long)a0;
- (void)addConstraint:(id)a0;
- (void)removeConstraint:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (void)setConstraints:(id)a0;
- (id)initWithModel:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1;
- (char)isValid:(id *)a0;
- (id)logIdentifier;
- (id)_initWithCoder:(id)a0;
- (void)_encodeWithCoder:(id)a0;
- (void)_mergeConstraintsLocallyWithAdditions:(id)a0 removals:(id)a1;
- (id)_modelsForMergeStrategyConstraintsUpdate:(id)a0;
- (void)addConstraintsInMemory:(id)a0;
- (char)canAddConstraint:(id)a0 error:(id *)a1;
- (char)canRemoveConstraint:(id)a0;
- (char)compareConstraints:(id)a0;
- (id)constraintWithIdentifier:(id)a0;
- (id)constraintsForCodingXPC;
- (id)copyIdentical;
- (id)copyReplica;
- (id)counterpartConstraintFor:(id)a0;
- (id)inMemoryConstraintWithIdentifier:(id)a0;
- (char)isConstraintMergeStrategyReflection;
- (void)mergeConstraintsFromOther:(id)a0;
- (id)modelsForConstraintsUpdate:(id)a0;
- (void)removeConstraintsInMemory:(id)a0;
- (id)replicatedMissingConstraintsFrom:(id)a0;
- (char)shouldBlockSettingUpdateFromVersion:(id)a0 isMultiUserEnabled:(char)a1;
- (char)shouldTurnOffPersonalRequestsOnLanguageChangeTo:(id)a0 supportedMultiUserLanguageCodes:(id)a1 isMultiUserEnabled:(char)a2;

@end

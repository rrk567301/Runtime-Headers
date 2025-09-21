@class NSUUID, NSString, NSArray, NSMutableSet;
@protocol HMDAccessorySettingGroupDataSource;

@interface HMDAccessorySettingGroup : HMFObject <HMFLogging, NSSecureCoding, HMDSettingGroup> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_settings;
    NSMutableSet *_groups;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSUUID *parentIdentifier;
@property (weak) id<HMDAccessorySettingGroupDataSource> dataSource;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;
@property (weak) HMDAccessorySettingGroup *mediaSystemSettingGroup;
@property (readonly, copy) NSString *keyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)supportedGroupsClasses;
+ (id)supportedSettingsClasses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (id)fullDescription;
- (id)initWithModel:(id)a0;
- (void)addGroup:(id)a0;
- (void)removeGroup:(id)a0;
- (id)logIdentifier;
- (id)settingWithName:(id)a0;
- (void)addSetting:(id)a0;
- (void)removeSetting:(id)a0;
- (id)_initWithCoder:(id)a0;
- (void)_encodeWithCoder:(id)a0;
- (void)_reevaluateParentGroup:(id)a0;
- (void)_setParentGroup:(id)a0;
- (id)_settingWithKeys:(id)a0;
- (char)compareSettingsTree:(id)a0;
- (id)copyIdentical;
- (id)copyReplica;
- (char)dataSourceShouldEncodeSetting:(id)a0 withCoder:(id)a1;
- (id)groupWithIdentifier:(id)a0;
- (id)initWithName:(id)a0 identifier:(id)a1 parentIdentifier:(id)a2;
- (void)intersectSettingGroup:(id)a0 groupMetadata:(id)a1 shouldAddMissingItems:(char)a2;
- (char)isPrivateToDevice;
- (id)settingWithIdentifier:(id)a0;
- (id)settingWithKeyPath:(id)a0;
- (char)shouldEncodeForCoder:(id)a0;
- (id)subGroupWithName:(id)a0;

@end

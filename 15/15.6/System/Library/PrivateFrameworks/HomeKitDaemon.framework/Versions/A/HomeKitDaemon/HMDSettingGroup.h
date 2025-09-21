@class NSUUID, NSString, NSMutableSet, NSArray;

@interface HMDSettingGroup : NSObject <HMDSettingGroup> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain) NSMutableSet *settingsInternal;
@property (retain) NSMutableSet *groupsInternal;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSArray *groups;
@property (copy) NSString *keyPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModel:(id)a0;
- (void)addGroup:(id)a0;
- (void)addSetting:(id)a0;
- (id)initWithIdentifier:(id)a0 parentIdentifier:(id)a1 name:(id)a2 groups:(id)a3 settings:(id)a4;

@end

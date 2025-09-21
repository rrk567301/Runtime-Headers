@class HMMediaProfile, NSUUID, HMMediaSystemRole, HMAccessory, NSString;

@interface HMMediaSystemComponent : NSObject <HMFLogging, NSSecureCoding, HMObjectMerge, NSCopying, NSMutableCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly, weak, nonatomic) HMMediaProfile *mediaProfile;
@property (readonly, nonatomic) HMMediaSystemRole *role;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)mediaSystemComponentWithDictionary:(id)a0 home:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (void)setRole:(id)a0;
- (id)logIdentifier;
- (id)initWithUUID:(id)a0 mediaProfile:(id)a1 role:(id)a2;
- (void)_unconfigure;
- (void)_updateAccessoryReference:(id)a0;
- (id)initWithMediaProfile:(id)a0 role:(id)a1;
- (char)mergeFromNewObject:(id)a0;
- (char)mergeRoleWithComponent:(id)a0;

@end

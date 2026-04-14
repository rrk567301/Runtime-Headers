@class NSString, CKUserIdentity;

@interface CKShareInheritedParticipant : NSObject <CKPropertiesDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKUserIdentity *userIdentity;
@property (readonly) long long role;
@property (readonly) long long permission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)CKDescribePropertiesUsing:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (void)_stripPersonalInfo;
- (BOOL)hasSameIdentityAsParticipant:(id)a0;
- (id)initWithUserIdentity:(id)a0 role:(long long)a1 permission:(long long)a2;
- (id)initWithUserIdentity:(id)a0 roles:(id)a1 permissions:(id)a2;

@end

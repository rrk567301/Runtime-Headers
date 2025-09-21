@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying>

@property char requiresSecureMessage;
@property char allowsAnonymousMessage;
@property char requiresAccountMessage;
@property unsigned long long transportRestriction;
@property unsigned long long roles;

+ (id)defaultPolicy;
+ (id)defaultSecurePolicy;
+ (id)defaultSecurePrimaryResidentPolicy;
+ (id)remoteMessagePolicyWithRequiresSecureMessage:(char)a0 allowsAnonymousMessage:(char)a1 requiresAccountMessage:(char)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)__initWithRequiresSecureMessage:(char)a0 allowsAnonymousMessage:(char)a1 requiresAccountMessage:(char)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;

@end

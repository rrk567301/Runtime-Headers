@interface HMDRemoteMessagePolicy : HMFMessagePolicy <NSMutableCopying>

@property BOOL requiresSecureMessage;
@property BOOL allowsAnonymousMessage;
@property BOOL requiresAccountMessage;
@property unsigned long long transportRestriction;
@property unsigned long long roles;

+ (id)remoteMessagePolicyWithRequiresSecureMessage:(BOOL)a0 allowsAnonymousMessage:(BOOL)a1 requiresAccountMessage:(BOOL)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;
+ (id)defaultPolicy;
+ (id)defaultSecurePolicy;
+ (id)defaultSecurePrimaryResidentPolicy;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)__initWithRequiresSecureMessage:(BOOL)a0 allowsAnonymousMessage:(BOOL)a1 requiresAccountMessage:(BOOL)a2 transportRestriction:(unsigned long long)a3 roles:(unsigned long long)a4;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

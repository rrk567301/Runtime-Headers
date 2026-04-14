@class AKSignInWithAppleAccount;

@interface AKAuthorizationSharedAccountLoginChoice : AKAuthorizationLoginChoice

@property (readonly, nonatomic) AKSignInWithAppleAccount *sharedAccount;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithSignInWithAppleAccount:(id)a0;

@end

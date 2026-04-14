@class AKSignInWithAppleAccount;

@interface AKAuthorizationSharedAccountLoginChoice : AKAuthorizationLoginChoice

@property (readonly, nonatomic) AKSignInWithAppleAccount *sharedAccount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSignInWithAppleAccount:(id)a0;

@end

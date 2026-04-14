@class AKSignInWithAppleAccount;

@interface AKAuthorizationSharedAccountLoginChoice : AKAuthorizationLoginChoice

@property (readonly, nonatomic) AKSignInWithAppleAccount *sharedAccount;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSignInWithAppleAccount:(id)a0;

@end

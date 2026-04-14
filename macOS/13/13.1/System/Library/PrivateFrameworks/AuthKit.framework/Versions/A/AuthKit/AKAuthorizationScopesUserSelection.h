@class AKUserInformation;

@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) AKUserInformation *userInformation;
@property (nonatomic) BOOL makePrivateEmail;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

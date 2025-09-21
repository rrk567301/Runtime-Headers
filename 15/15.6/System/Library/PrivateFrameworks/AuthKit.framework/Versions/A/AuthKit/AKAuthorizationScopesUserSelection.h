@class AKUserInformation;

@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) AKUserInformation *userInformation;
@property (nonatomic) char makePrivateEmail;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

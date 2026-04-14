@class AKUserInformation;

@interface AKAuthorizationScopesUserSelection : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) AKUserInformation *userInformation;
@property (nonatomic) BOOL makePrivateEmail;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

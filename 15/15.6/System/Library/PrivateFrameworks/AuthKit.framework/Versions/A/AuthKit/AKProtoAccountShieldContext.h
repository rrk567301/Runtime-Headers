@class ACAccount;

@interface AKProtoAccountShieldContext : AKAppleIDAuthenticationContext

@property (retain, nonatomic) ACAccount *protoAccount;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContext:(id)a0;

@end

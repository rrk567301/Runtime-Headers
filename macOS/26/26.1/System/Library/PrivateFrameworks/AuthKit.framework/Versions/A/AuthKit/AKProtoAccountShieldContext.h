@class ACAccount, NSDate;

@interface AKProtoAccountShieldContext : AKAppleIDAuthenticationContext

@property (retain, nonatomic) ACAccount *protoAccount;
@property (retain, nonatomic) NSDate *pendingDOB;

+ (BOOL)supportsSecureCoding;

- (id)initWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

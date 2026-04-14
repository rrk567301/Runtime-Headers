@class NSDictionary, ACAccount, AMSAuthKitUpdateResult;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSAuthKitUpdateResult *authKitUpdateResult;
@property (readonly) ACAccount *account;
@property (readonly) NSDictionary *authenticationResults;
@property (readonly) NSDictionary *serverResponse;

- (id)initWithAccount:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

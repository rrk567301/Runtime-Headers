@class NSString, NSDictionary, ACAccount, AMSAuthKitUpdateResult;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) AMSAuthKitUpdateResult *authKitUpdateResult;
@property (readonly) ACAccount *account;
@property (readonly) NSDictionary *authenticationResults;
@property (readonly) NSString *editToken;
@property (readonly) NSDictionary *serverResponse;

- (id)initWithAccount:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end

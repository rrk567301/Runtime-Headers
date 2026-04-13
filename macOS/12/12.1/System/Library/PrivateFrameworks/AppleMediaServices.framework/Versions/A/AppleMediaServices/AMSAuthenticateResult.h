@class NSDictionary, ACAccount;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ACAccount *account;
@property (readonly) NSDictionary *serverResponse;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;

@end

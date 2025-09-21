@class AMSAuthenticateOptions, NSString, NSDictionary, ACAccount;

@interface AMSAuthenticateRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ACAccount *account;
@property BOOL isServerRequested;
@property (retain) NSString *logKey;
@property (retain) AMSAuthenticateOptions *options;
@property (retain) NSDictionary *userInfo;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 options:(id)a1;
- (id)initWithDSID:(id)a0 altDSID:(id)a1 username:(id)a2 options:(id)a3;

@end

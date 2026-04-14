@class ACAccount;

@interface AAAutoAccountVerifier : NSObject

@property (retain, nonatomic) ACAccount *account;

- (void)cancel;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)sendVerificationEmail;
- (void)verifyWithHandler:(id /* block */)a0;

@end

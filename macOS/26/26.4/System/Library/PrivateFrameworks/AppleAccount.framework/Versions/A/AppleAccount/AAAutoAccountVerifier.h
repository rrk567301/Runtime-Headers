@class ACAccount;

@interface AAAutoAccountVerifier : NSObject

@property (retain, nonatomic) ACAccount *account;

- (id)initWithAccount:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (void)sendVerificationEmail;
- (void)verifyWithHandler:(id /* block */)a0;

@end

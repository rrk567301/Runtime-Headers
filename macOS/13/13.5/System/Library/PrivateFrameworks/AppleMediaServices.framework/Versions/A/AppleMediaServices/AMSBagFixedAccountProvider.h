@class NSString, ACAccount;

@interface AMSBagFixedAccountProvider : NSObject <AMSBagAccountProvider>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly) BOOL bagLoadShouldUpdateAccountProperties;
@property (readonly) NSString *identity;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (BOOL)associatedAccountIsEqualToAccount:(id)a0 forMediaType:(id)a1;
- (id)bagAccountForAccountMediaType:(id)a0;
- (id)bagStorefrontForAccountMediaType:(id)a0;

@end

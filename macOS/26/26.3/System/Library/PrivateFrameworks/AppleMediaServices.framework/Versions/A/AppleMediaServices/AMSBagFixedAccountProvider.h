@class NSString, ACAccount;

@interface AMSBagFixedAccountProvider : NSObject <AMSBagAccountProvider>

@property (retain) ACAccount *account;
@property (readonly) NSString *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (BOOL)associatedAccountIsEqualToAccount:(id)a0 forMediaType:(id)a1;
- (id)bagAccountForAccountMediaType:(id)a0;
- (id)bagAccountPromiseForAccountMediaType:(id)a0;
- (id)bagStorefrontForAccountMediaType:(id)a0;
- (id)bagStorefrontPromiseForAccountMediaType:(id)a0;

@end

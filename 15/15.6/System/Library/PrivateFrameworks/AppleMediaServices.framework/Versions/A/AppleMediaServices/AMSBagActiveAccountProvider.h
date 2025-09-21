@class NSString, ACAccount;

@interface AMSBagActiveAccountProvider : NSObject <AMSBagAccountProvider>

@property (retain) ACAccount *account;
@property (readonly) NSString *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_storefrontPromiseResultForAccountMediaType:(id)a0 account:(id)a1;

- (void).cxx_destruct;
- (id)_activeAccountInStore:(id)a0 forMediaType:(id)a1;
- (void)_bagAccountForAccountMediaType:(id)a0 mustContainStorefront:(char)a1 sync:(char)a2 completion:(id /* block */)a3;
- (id)_handleFetchedLocalAccount:(id)a0 fetchError:(id)a1 mustContainStorefront:(char)a2 mediaType:(id)a3 error:(id *)a4;
- (void)_localAccountInStore:(id)a0 mediaType:(id)a1 mustContainStorefront:(char)a2 sync:(char)a3 completion:(id /* block */)a4;
- (char)associatedAccountIsEqualToAccount:(id)a0 forMediaType:(id)a1;
- (id)bagAccountForAccountMediaType:(id)a0;
- (id)bagAccountPromiseForAccountMediaType:(id)a0;
- (id)bagStorefrontForAccountMediaType:(id)a0;
- (id)bagStorefrontPromiseForAccountMediaType:(id)a0;

@end

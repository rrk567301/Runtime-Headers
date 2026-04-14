@class AMSBinaryPromise, ACAccount, AMSPromise;

@interface VUIAuthenticationManager : NSObject

@property (retain, nonatomic) AMSPromise *_authPromise;
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise;
@property (readonly, nonatomic) ACAccount *_activeUserAccount;
@property (readonly, nonatomic) ACAccount *_localUserAccount;

+ (id)sharedInstance;
+ (id)identifier;
+ (id)userFullName;
+ (id)DSID;
+ (id)userAccountName;
+ (id)storefrontId;
+ (BOOL)allowsAccountModification;
+ (BOOL)userHasActiveAccount;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_userAccount;
+ (id)userFirstName;
+ (id)userLastName;
+ (void)_performAuthenticationTask:(id)a0 isSilent:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)_recordLog:(id)a0 isSignOut:(BOOL)a1 isSilent:(BOOL)a2;
+ (id)creditsString;
+ (void)signInUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)signOutUserWithCompletionHandler:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (BOOL)_shouldNotifyAccountChange:(id)a0 newAccount:(id)a1;

@end

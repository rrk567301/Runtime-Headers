@class AOSUIProfilePictureStore, NSImage, AMSBinaryPromise, ACAccount, AMSPromise;

@interface VUIAuthenticationManager : NSObject

@property (retain, nonatomic) AMSPromise *_authPromise;
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise;
@property (readonly, nonatomic) ACAccount *_activeUserAccount;
@property (readonly, nonatomic) ACAccount *_localUserAccount;
@property (retain, nonatomic) AOSUIProfilePictureStore *_profilePictureStore;
@property (readonly, nonatomic) NSImage *_profileImage;

+ (id)identifier;
+ (id)sharedInstance;
+ (id)userFullName;
+ (id)DSID;
+ (id)userAccountName;
+ (id)storefrontId;
+ (BOOL)allowsAccountModification;
+ (void)_performAuthenticationTask:(id)a0 isSilent:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)_profileImage;
+ (void)_recordLog:(id)a0 isSignOut:(BOOL)a1 isSilent:(BOOL)a2;
+ (id)_userAccount;
+ (id)creditsString;
+ (void)requestAuthenticationAlwaysPrompt:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
+ (void)signInUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)signOutUserWithCompletionHandler:(id /* block */)a0;
+ (id)userFirstName;
+ (BOOL)userHasActiveAccount;
+ (id)userLastName;
+ (id)userProfileImage;

- (id)init;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (void)_fetchProfileImage;
- (BOOL)_shouldNotifyAccountChange:(id)a0 newAccount:(id)a1;

@end

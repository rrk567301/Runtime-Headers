@class AOSUIProfilePictureStore, VUIImageProxy, NSImage, AMSBinaryPromise, ACAccount, AMSPromise;

@interface VUIAuthenticationManager : NSObject

@property (retain, nonatomic) AMSPromise *_authPromise;
@property (retain, nonatomic) AMSBinaryPromise *_signoutPromise;
@property (readonly, nonatomic) ACAccount *_activeUserAccount;
@property (readonly, nonatomic) ACAccount *_localUserAccount;
@property (retain, nonatomic) AOSUIProfilePictureStore *_profilePictureStore;
@property (retain, nonatomic) VUIImageProxy *imageProxy;
@property (readonly, nonatomic) NSImage *_profileImage;
@property (nonatomic) char _isLibraryOnlyCountry;
@property (nonatomic) char _isLibraryOnlyCountryResolved;

+ (id)identifier;
+ (id)sharedInstance;
+ (id)userFullName;
+ (id)DSID;
+ (id)userAccountName;
+ (id)storefrontId;
+ (char)allowsAccountModification;
+ (char)lightWeightUserHasActiveAccount;
+ (char)_isLibraryOnlyCountry;
+ (char)_isLibraryOnlyCountryResolved;
+ (void)_performAuthenticationTask:(id)a0 isSilent:(char)a1 completionHandler:(id /* block */)a2;
+ (id)_profileImage;
+ (void)_recordLog:(id)a0 isSignOut:(char)a1 isSilent:(char)a2;
+ (id)_userAccount;
+ (id)creditsString;
+ (char)isLibraryOnlyCountry;
+ (char)isLibraryOnlyCountryResolved;
+ (void)requestAuthenticationAlwaysPrompt:(char)a0 withCompletionHandler:(id /* block */)a1;
+ (void)signInUserWithAppleID:(id)a0 password:(id)a1 completionHandler:(id /* block */)a2;
+ (void)signOutUserWithCompletionHandler:(id /* block */)a0;
+ (id)userFirstName;
+ (char)userHasActiveAccount;
+ (id)userLastName;
+ (id)userProfileImage;

- (id)init;
- (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)a0;
- (void)_determineIfLibraryOnlyCountry;
- (void)_fetchProfileImage;
- (void)_fetchProfileImageForOSX;
- (void)_setUpProfileImageStoreAndFetchProfileImage;
- (char)_shouldNotifyAccountChange:(id)a0 newAccount:(id)a1;

@end

@class IMAccount, IMServiceImpl, SOAccountAliasController, NSTimer;

@interface SOAccountRegistrationController : NSObject <IMCloudKitEventHandlerAccountInfoProvider>

@property (nonatomic) long long registrationState;
@property (nonatomic) long long enabledState;
@property (retain, nonatomic) IMAccount *account;
@property (retain, nonatomic) SOAccountAliasController *aliasController;
@property (retain, nonatomic) IMServiceImpl *serviceType;
@property (nonatomic) char isSigningOut;
@property (nonatomic) char isSignedIn;
@property (retain) NSTimer *authenticationTimer;

+ (id)errorWithCode:(long long)a0;
+ (id)faceTimeRegistrationController;
+ (id)registrationController;
+ (id)registrationControllerForAccount:(id)a0;
+ (void)resetSharedInstance;
+ (id)stringForAccountRegistrationFailure:(long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)registerAccount;
- (void)enableAccount:(char)a0;
- (id)loginName;
- (void)signOut;
- (char)cloudKitEventNotificationManagerAccountHasiMessageEnabled:(id)a0;
- (char)deleteAccount;
- (void)_SOAccountAliasVerificationStateChanged:(id)a0;
- (void)_accountAliasActivationStateChanged:(id)a0;
- (void)_accountAliasCountChanged:(id)a0;
- (void)_authenticationTimerTimedOut:(id)a0;
- (void)_clearAliasController;
- (void)_clearAuthenticationTimeout;
- (void)_registerAccountIfNecessary;
- (void)_setupAliasController;
- (char)accountIsSignedIn;
- (void)accountLoggedOut:(id)a0;
- (char)accountOnlineAndRegistered;
- (void)activationStatusChanged:(id)a0;
- (char)addAndConfirmNewAlias:(id)a0;
- (void)authenticateWithUsername:(id)a0 authID:(id)a1 authToken:(id)a2;
- (void)authenticateWithUsername:(id)a0 password:(id)a1;
- (void)authenticateWithUsername:(id)a0 password:(id)a1 authID:(id)a2 authToken:(id)a3;
- (void)confirmNewAlias:(id)a0;
- (void)enableReadReceipts:(char)a0;
- (id)localizedRegistrationErrorMessage;
- (char)readReceiptsEnabled;
- (void)registrationStatusChanged:(id)a0;
- (void)setEnabledState:(long long)a0 andPostNotification:(char)a1;
- (void)setRegistrationState:(long long)a0 andPostNotification:(char)a1;
- (void)signOutAndUpdateDaemon:(char)a0;
- (void)updateStateForAccountStatusAndPostNotification:(char)a0;

@end

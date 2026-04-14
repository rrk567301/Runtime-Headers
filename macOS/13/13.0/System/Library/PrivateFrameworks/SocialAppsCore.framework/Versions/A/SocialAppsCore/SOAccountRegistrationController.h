@class IMAccount, IMServiceImpl, SOAccountAliasController, NSTimer;

@interface SOAccountRegistrationController : NSObject <IMCloudKitEventHandlerAccountInfoProvider>

@property (nonatomic) long long registrationState;
@property (nonatomic) long long enabledState;
@property (retain, nonatomic) IMAccount *account;
@property (retain, nonatomic) SOAccountAliasController *aliasController;
@property (retain, nonatomic) IMServiceImpl *serviceType;
@property (nonatomic) BOOL isSigningOut;
@property (nonatomic) BOOL isSignedIn;
@property (retain) NSTimer *authenticationTimer;

+ (id)errorWithCode:(long long)a0;
+ (id)registrationController;
+ (id)faceTimeRegistrationController;
+ (id)registrationControllerForAccount:(id)a0;
+ (id)stringForAccountRegistrationFailure:(long long)a0;
+ (void)resetSharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)enableAccount:(BOOL)a0;
- (void)registerAccount;
- (id)loginName;
- (void)signOut;
- (BOOL)cloudKitEventNotificationManagerAccountHasiMessageEnabled:(id)a0;
- (BOOL)deleteAccount;
- (void)_authenticationTimerTimedOut:(id)a0;
- (void)registrationStatusChanged:(id)a0;
- (void)activationStatusChanged:(id)a0;
- (void)accountLoggedOut:(id)a0;
- (void)_accountAliasCountChanged:(id)a0;
- (void)_SOAccountAliasVerificationStateChanged:(id)a0;
- (void)_accountAliasActivationStateChanged:(id)a0;
- (void)setRegistrationState:(long long)a0 andPostNotification:(BOOL)a1;
- (void)setEnabledState:(long long)a0 andPostNotification:(BOOL)a1;
- (void)updateStateForAccountStatusAndPostNotification:(BOOL)a0;
- (void)authenticateWithUsername:(id)a0 password:(id)a1;
- (void)authenticateWithUsername:(id)a0 authID:(id)a1 authToken:(id)a2;
- (void)authenticateWithUsername:(id)a0 password:(id)a1 authID:(id)a2 authToken:(id)a3;
- (void)_registerAccountIfNecessary;
- (void)signOutAndUpdateDaemon:(BOOL)a0;
- (BOOL)addAndConfirmNewAlias:(id)a0;
- (void)confirmNewAlias:(id)a0;
- (void)enableReadReceipts:(BOOL)a0;
- (BOOL)readReceiptsEnabled;
- (id)localizedRegistrationErrorMessage;
- (BOOL)accountIsSignedIn;
- (BOOL)accountOnlineAndRegistered;
- (void)_clearAuthenticationTimeout;
- (void)_setupAliasController;
- (void)_clearAliasController;

@end

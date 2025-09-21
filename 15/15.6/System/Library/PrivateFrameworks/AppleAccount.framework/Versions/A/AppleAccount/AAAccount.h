@class NSString, NSArray, NSDictionary, NSSet, ACAccount;

@interface AAAccount : NSObject {
    ACAccount *_account;
}

@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *fmipToken;
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (nonatomic) char primaryAccount;
@property (readonly, nonatomic) char primaryEmailVerified;
@property (readonly, nonatomic) char needsEmailConfiguration;
@property (readonly, nonatomic) char needsRegistration;
@property (readonly, nonatomic) char serviceUnavailable;
@property (readonly, nonatomic) NSDictionary *serviceUnavailableInfo;
@property (readonly, nonatomic) NSString *protocolVersion;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSSet *provisionedDataclasses;
@property (readonly, nonatomic) NSSet *enabledDataclasses;
@property (copy, nonatomic) NSString *accountDescription;
@property (readonly, nonatomic) NSString *accountFooterText;
@property (readonly, nonatomic) NSDictionary *accountFooterButton;
@property (readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) NSString *syncStoreIdentifier;
@property (nonatomic) char needsToVerifyTerms;
@property (readonly, nonatomic) NSArray *supportedDataclasses;
@property (readonly, nonatomic) int accountServiceType;

+ (id)accountTypeString;

- (id)init;
- (void).cxx_destruct;
- (id)account;
- (id)initWithAccount:(id)a0;
- (id)accountPropertyForKey:(id)a0;
- (char)isEnabledForDataclass:(id)a0;
- (char)isProvisionedForDataclass:(id)a0;
- (id)propertiesForDataclass:(id)a0;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (void)setEnabled:(char)a0 forDataclass:(id)a1;
- (id)initWithAccountIdentifier:(id)a0;
- (id)_childAccounts;
- (id)_mailChildAccount;
- (void)authenticateWithHandler:(id /* block */)a0;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (int)mobileMeAccountStatus;
- (void)notifyUserOfQuotaDepletion;
- (void)presentQuotaDepletionAlertForDataclass:(id)a0;
- (void)presentQuotaDepletionAlertForDataclass:(id)a0 withHandler:(id /* block */)a1;
- (char)presentQuotaDepletionAlertForDataclassIfNecessary:(id)a0;
- (char)presentQuotaDepletionAlertForDataclassIfNecessary:(id)a0 withHandler:(id /* block */)a1;
- (void)removePasswordFromKeychain;
- (void)removeTokensFromKeychain;
- (void)renewCredentialsForAppleIDWithHandler:(id /* block */)a0;
- (void)saveFMIPTokenInKeychain;
- (void)savePasswordInKeychain;
- (void)saveTokensInKeychain;
- (void)setUseCellular:(char)a0 forDataclass:(id)a1;
- (void)setupChildMailAccountAndEnable:(char)a0 withEmail:(id)a1;
- (void)updateAccountPropertiesWithHandler:(id /* block */)a0;
- (void)updateAccountWithProvisioningResponse:(id)a0;
- (char)useCellularForDataclass:(id)a0;

@end

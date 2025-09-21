@class ACAccountCredential, NSString, NSArray, EFLazyCache, NSDictionary, ACAccount, NSObject, ACAccountStore;
@protocol OS_os_log;

@interface ECAccount : NSObject <EFLoggable, EFPubliclyDescribable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) ACAccount *systemAccount;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, copy, nonatomic) NSDictionary *dataclassProperties;
@property (readonly, nonatomic) EFLazyCache *cache;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) ACAccountCredential *credential;
@property (readonly, nonatomic) ACAccountStore *accountStore;
@property (readonly, copy, nonatomic) NSString *accountTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *accountDescription;
@property (copy, nonatomic) NSString *authenticationScheme;
@property (nonatomic) char allowInsecureAuthentication;
@property (nonatomic) char configureDynamically;
@property (readonly, copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *password;
@property (readonly, copy, nonatomic) NSString *oauthToken;
@property (nonatomic) char isEnabled;
@property (readonly, nonatomic) char isAppleAccount;
@property (readonly, nonatomic) char isAppleEmployeeAccount;
@property (readonly, nonatomic) char isYahooAccount;
@property (readonly, nonatomic) char isGmailAccount;
@property (readonly, nonatomic) char isExchangeAccount;
@property (readonly, nonatomic) char isOutlookAccount;
@property (readonly, nonatomic) char isAOLAccount;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) char isPersonaAccount;
@property (readonly, nonatomic) char isAuthenticated;
@property (readonly, nonatomic) char hasPasswordCredential;
@property (readonly, copy, nonatomic) NSArray *standardPorts;
@property (readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property (readonly, nonatomic) long long defaultPortNumber;
@property (readonly, nonatomic) long long defaultSecurePortNumber;
@property (nonatomic) long long portNumber;
@property (nonatomic) char sslIsDirect;
@property (readonly, nonatomic) char sslIsDirectIsSet;
@property (nonatomic) char usesSSL;
@property (copy, nonatomic) NSString *accountDirectoryTildeAbbreviatedPath;
@property (nonatomic) long long numberOfDaysToKeepTrash;
@property (nonatomic) long long numberOfDaysToKeepJunk;
@property (nonatomic) char deleteMessagesInPlace;
@property (copy, nonatomic) NSString *draftsMailboxName;
@property (copy, nonatomic) NSString *outboxMailboxName;
@property (copy, nonatomic) NSString *sentMessagesMailboxName;
@property (copy, nonatomic) NSString *trashMailboxName;
@property (copy, nonatomic) NSString *junkMailboxName;
@property (copy, nonatomic) NSString *notesMailboxName;
@property (copy, nonatomic) NSString *toDosMailboxName;
@property (copy, nonatomic) NSString *archiveMailboxName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (void).cxx_destruct;
- (void)clearCache;
- (void)refresh;
- (id)enabledDataclasses;
- (char)isEnabledForDataclass:(id)a0;
- (char)_cachedEnabled;
- (id)_cachedParentAccount;
- (id)_hostnameFromParentAccount:(id)a0;
- (void)clearSSLIsDirect;
- (void)clearUsesSSL;
- (id)dataClassPropertyForKey:(id)a0;
- (id)initWithSystemAccount:(id)a0;
- (id)initWithSystemAccount:(id)a0 accountStore:(id)a1;
- (id)portNumberObject;
- (void)renewCredentialsWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)setDataClassProperty:(id)a0 forKey:(id)a1;
- (void)setOAuth2Token:(id)a0 refreshToken:(id)a1;
- (char)setSslIsDirectIsSet;
- (id)usesSSLObject;

@end

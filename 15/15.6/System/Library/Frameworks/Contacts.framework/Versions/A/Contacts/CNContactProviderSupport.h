@class CNContactStore, NSString, CNXPCContactsSupport, CNUnfairLock, CNContactProviderSupportSession;

@interface CNContactProviderSupport : NSObject

@property (class, readonly) CNContactProviderSupport *sharedInstance;

@property (retain, nonatomic) CNContactStore *providerStore;
@property (retain, nonatomic) CNXPCContactsSupport *contactsSupport;
@property (readonly) CNUnfairLock *lock;
@property (retain, nonatomic) CNContactProviderSupportSession *currentSession;
@property (readonly, copy, nonatomic) NSString *domainIdentifier;
@property (readonly, nonatomic, getter=isDomainEnabled) char domainEnabled;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy, nonatomic) NSString *domainContainerIdentifier;

+ (char)addDomain:(id)a0 error:(id *)a1;
+ (long long)allDomainsCountWithError:(id *)a0;
+ (id)allDomainsWithError:(id *)a0;
+ (char)disableDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
+ (char)enableDomain:(id)a0 bundleIdentifier:(id)a1 shouldSynchronize:(char)a2 error:(id *)a3;
+ (id)registeredDomainsWithError:(id *)a0;
+ (char)removeDomain:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)endSession;
- (char)addDomain:(id)a0 error:(id *)a1;
- (long long)allDomainsCountWithError:(id *)a0;
- (id)allDomainsWithError:(id *)a0;
- (void)disableDomainWithCompletionHandler:(id /* block */)a0;
- (void)enableDomainWithCompletionHandler:(id /* block */)a0;
- (id)initWithDomainIdentifier:(id)a0;
- (char)instanceDisableDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (char)instanceEnableDomain:(id)a0 bundleIdentifier:(id)a1 shouldSynchronize:(char)a2 error:(id *)a3;
- (void)invalidateExtensionWithCompletionHandler:(id /* block */)a0;
- (char)isSessionRunning;
- (id)registeredDomainsWithError:(id *)a0;
- (char)removeDomain:(id)a0 error:(id *)a1;
- (void)requestProviderDomainCommand:(id)a0 completionHandler:(id /* block */)a1;
- (char)requestProviderDomainCommand:(id)a0 error:(id *)a1;
- (void)resetEnumerationWithCompletionHandler:(id /* block */)a0;
- (void)startSession:(id)a0;
- (void)synchronizeDomainUsingSession:(id)a0 completionHandler:(id /* block */)a1;

@end

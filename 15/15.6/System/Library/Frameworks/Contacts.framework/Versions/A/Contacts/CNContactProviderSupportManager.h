@class NSString, _TtC8Contacts28CNContactProviderSupportHost, CNContainer, CNContactProviderSupportModerator;

@interface CNContactProviderSupportManager : NSObject

@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (retain, nonatomic) _TtC8Contacts28CNContactProviderSupportHost *providerHost;
@property (retain, nonatomic) CNContactProviderSupportModerator *moderator;
@property (readonly, nonatomic) CNContainer *providerContainer;

+ (void)invalidateCache;
+ (char)isConnectionForContactProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0;
- (id)requestHostDomainCommand:(id)a0 error:(id *)a1;
- (char)addDomain:(id)a0 error:(id *)a1;
- (char)disableDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (char)enableDomain:(id)a0 bundleIdentifier:(id)a1 shouldSynchronize:(char)a2 error:(id *)a3;
- (id)fetchExtensionCount;
- (id)fetchExtensionItems;
- (id)getActualBundleIdentifier:(id)a0;
- (char)invalidateExtensionForDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (id)isProviderDomainEnabledWithBundleIdentifier:(id)a0;
- (id)providerContainerWithBundleIdentifier:(id)a0;
- (id)registeredDomainsForBundleIdentifier:(id)a0 error:(id *)a1;
- (char)removeDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (char)resetEnumerationForDomain:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (char)synchronizeProviderDomainUsingSession:(id)a0 error:(id *)a1;

@end

@class NSString, _TtC8Contacts21CNContactProviderHost, CNContactProviderModerator, CNContainer;

@interface CNContactProviderManager : NSObject

@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (retain, nonatomic) _TtC8Contacts21CNContactProviderHost *providerHost;
@property (retain, nonatomic) CNContactProviderModerator *moderator;
@property (readonly, nonatomic) CNContainer *providerContainer;

+ (BOOL)isConnectionForContactProvider:(id)a0;

- (void).cxx_destruct;
- (id)initWithAuditToken:(id)a0;
- (BOOL)disableExtensionWithBundleIdentifier:(id)a0 error:(id *)a1;
- (BOOL)enableExtensionWithBundleIdentifier:(id)a0 error:(id *)a1;
- (id)fetchExtensionCount;
- (id)fetchExtensionItems;
- (id)getActualBundleIdentifier:(id)a0;
- (id)isExtensionEnabledWithBundleIdentifier:(id)a0;
- (id)requestHostExtensionCommand:(id)a0 error:(id *)a1;
- (BOOL)synchronizeUsingSession:(id)a0 error:(id *)a1;

@end

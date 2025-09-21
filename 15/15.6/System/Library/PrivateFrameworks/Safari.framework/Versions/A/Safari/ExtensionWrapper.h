@class SafariWebExtension, NSString, NSURL, NSExtension, NSArray, NSSet, NSDictionary, NSImage;

@interface ExtensionWrapper : NSObject <WBSExtensionWrapper> {
    NSExtension *_appExtension;
    NSExtension *_contentBlockerAppExtension;
    SafariWebExtension *_webExtension;
    NSString *_iconDataURLString;
    NSString *_composedIdentifier;
    char _initializedWithComposedIdentifier;
    NSString *_profileServerID;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayVersion;
@property (readonly, nonatomic) NSURL *containingAppURL;
@property (readonly, copy, nonatomic) NSString *descriptionText;
@property (readonly, nonatomic) NSImage *preferencesIcon;
@property (readonly, copy, nonatomic) NSString *composedIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *websiteAccess;
@property (readonly, nonatomic) NSExtension *appExtension;
@property (readonly, copy, nonatomic) NSArray *errorStrings;
@property (readonly, nonatomic) SafariWebExtension *webExtension;
@property (readonly, nonatomic) char isUnpackedExtension;
@property (readonly, copy, nonatomic) NSSet *urlsPendingApproval;
@property (readonly, copy, nonatomic) NSSet *apiNamesPendingApproval;
@property (readonly, nonatomic) char requestsAccessToAllHosts;
@property (readonly, nonatomic) char hasInjectedContent;
@property (readonly, nonatomic) char requestsTracking;
@property (readonly, nonatomic) NSArray *enabledProfileDisplayTitles;
@property (readonly, copy, nonatomic) NSString *containingAppDisplayName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isEnabled) char enabled;
@property (readonly, nonatomic) char canEnable;
@property (nonatomic) char allowedInPrivateBrowsing;
@property (readonly, nonatomic) char isContentBlocker;
@property (readonly, nonatomic) NSArray *enabledProfiles;
@property (readonly, nonatomic) NSArray *enabledNamedProfiles;
@property (readonly, nonatomic, getter=isEnabledInAnyProfile) char enabledInAnyProfile;
@property (readonly, nonatomic, getter=isEnabledInAnyNamedProfile) char enabledInAnyNamedProfile;
@property (readonly, nonatomic, getter=isEnabledInAllNamedProfiles) char enabledInAllNamedProfiles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionWrapperWithExtension:(id)a0 profileServerID:(id)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)disable;
- (long long)localizedCompare:(id)a0;
- (id)_appExtension;
- (id)_appExtensionsController;
- (id)_contentBlockerAppExtension;
- (id)_contentBlockerManager;
- (void)_enableExtensionWithAuthorization:(char)a0 enableExtensionBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)_enableWebExtensionAndPromptForNewTabOverrideIfNecessary;
- (id)_initWithIdentifier:(id)a0 profileServerID:(id)a1;
- (id)_webExtensionsController;
- (char)canLoadWithErrorString:(id *)a0;
- (void)disableInAllProfiles;
- (void)enableFromExtensionsBanner;
- (void)enableFromImportConflictView;
- (void)enableFromSettingsWithAuthorization:(char)a0 completionHandler:(id /* block */)a1;
- (void)enableInAllProfilesWithAuthorization:(char)a0 completionHandler:(id /* block */)a1;
- (char)hasMoreThanOneRequestedOriginNotAlreadyConfigured;
- (id)initWithComposedIdentifier:(id)a0 profileServerID:(id)a1;
- (char)isEnabledInProfile:(id)a0;
- (void)removeAllGrantedPermissions;

@end

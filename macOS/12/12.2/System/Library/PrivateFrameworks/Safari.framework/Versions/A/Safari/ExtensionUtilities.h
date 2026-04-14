@interface ExtensionUtilities : NSObject

+ (void)showExtensionPreferencesForExtensionWithIdentifier:(id)a0;
+ (void)showPromptForExtensionDisabledBecauseItHasRequestedAdditionalPermissions:(id)a0 extensionIdentifier:(id)a1;
+ (void)reportBlocklistedExtension:(id)a0;
+ (id)userVisibleWebsiteAccessWithWebsiteAccessLevel:(int)a0 allowedDomains:(struct Vector<Safari::ExtensionDomainPattern, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; })a1 hasInjectedContent:(BOOL)a2;
+ (id)userVisibleWebsiteAccessForContentBlocker;
+ (id)userVisibleWebsiteAccessWithWebsiteAccessLevel:(int)a0 allowedDomains:(struct Vector<Safari::ExtensionDomainPattern, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; })a1 allowedDomainsForHeaderInjection:(struct Vector<Safari::ExtensionDomainPattern, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> { struct ExtensionDomainPattern *x0; unsigned int x1; unsigned int x2; })a2 hasInjectedContent:(BOOL)a3;
+ (id)accessLevelStringForAccessLevel:(int)a0;
+ (BOOL)promptForBiometricOrWatchAuthorizationToEnableExtension;
+ (void)showPromptForExtensionDisabledBecauseItDoesNotSupportThisVersionOfSafariWithMessage:(id)a0 extensionIdentifier:(id)a1;
+ (void)showPromptForExtensionBeingTurnedOnWithInvasivePermissions:(id)a0 accessLevel:(long long)a1 enableExtensionHandler:(id /* block */)a2;

@end

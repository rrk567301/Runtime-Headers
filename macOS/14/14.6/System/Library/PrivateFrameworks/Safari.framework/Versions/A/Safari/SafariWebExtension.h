@class NSString, SafariWebExtensionsController, NSImage, PerSitePreferenceUserInterfaceInformation;

@interface SafariWebExtension : WBSWebExtensionData <WKNavigationDelegate, WKUIDelegate>

@property (weak, nonatomic) SafariWebExtensionsController *extensionsController;
@property (readonly, nonatomic) NSImage *iconBadgedWithSafariIcon;
@property (readonly, nonatomic) PerSitePreferenceUserInterfaceInformation *perSitePreferenceUserInterfaceInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_applicationIsActive;
- (id)webView:(id)a0 createWebViewWithConfiguration:(id)a1 forNavigationAction:(id)a2 windowFeatures:(id)a3;
- (void)userGesturePerformedInTab:(id)a0;
- (id)_backgroundWebViewConfiguration;
- (void)_compileDeclarativeNetRequestRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)_loadInspectorBackgroundWebViewsAndConnectInspectorsIfNeeded;
- (void)_loadInspectorBackgroundWebViewsAndConnectInspectorsIfNeededInPrivateBrowsing;
- (void)_loadToolbarItem;
- (void)_loadToolbarItemInPrivateBrowsing;
- (void)_unloadInspectorBackgroundWebViewsAndConnectInspectorsIfNeededInPrivateBrowsing;
- (void)_unloadToolbarItem;
- (void)_unloadToolbarItemInPrivateBrowsing;
- (void)_validateToolbarItemInAllWindows;
- (void)checkPermissionAndPromptIfNecessaryToAccessURLs:(id)a0 inTab:(id)a1 options:(unsigned long long)a2 callingAPIName:(id)a3 completionHandler:(id /* block */)a4;

@end

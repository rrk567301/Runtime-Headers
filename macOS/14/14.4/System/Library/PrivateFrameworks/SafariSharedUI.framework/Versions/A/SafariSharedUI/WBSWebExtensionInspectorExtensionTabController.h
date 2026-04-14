@class NSString, WBSWebExtensionData, NSMutableDictionary, NSSet, _WKInspectorExtension;

@interface WBSWebExtensionInspectorExtensionTabController : NSObject <_WKInspectorExtensionDelegate> {
    WBSWebExtensionData *_webExtension;
    _WKInspectorExtension *_inspectorExtension;
    NSMutableDictionary *_deferredTabLoadRequests;
    NSMutableDictionary *_finishedTabLoadRequests;
    NSMutableDictionary *_cachedTabNames;
    NSString *_apiNamesDebugString;
    NSSet *_domains;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showGrantAllWebsitesConfirmationForExtension:(id)a0 fromWindow:(id)a1 responseBlock:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)createTabWithName:(id)a0 tabIconURL:(id)a1 sourceURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)inspectorExtension:(id)a0 didHideTabWithIdentifier:(id)a1;
- (void)inspectorExtension:(id)a0 didNavigateTabWithIdentifier:(id)a1 newURL:(id)a2;
- (void)inspectorExtension:(id)a0 didShowTabWithIdentifier:(id)a1 withFrameHandle:(id)a2;
- (void)inspectorExtension:(id)a0 inspectedPageDidNavigate:(id)a1;
- (void)_websiteDataPermissionsChanged:(id)a0;
- (void)_evaluatePermissionsForInspectedPageAndShowPromptIfNeeded;
- (id)_fallbackIconURLIfNotSpecified;
- (id)_payloadForExtensionTabPermissionPrompt;
- (id)_payloadForUnsupportedTargetMessageInTab:(id)a0;
- (void)_requestPerSiteAccess:(long long)a0 inspectedTab:(id)a1 withDomains:(id)a2 completionHandler:(id /* block */)a3;
- (void)_sendPermissionsPromptPayload:(id)a0 toInspectorExtensionTabWithID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_tabForInspectedPage;
- (id)_windowForExtensionHost;
- (BOOL)canReopenURLInNewTab:(id)a0;
- (id)initWithWebExtension:(id)a0 inspectorExtension:(id)a1;
- (id)inspectedPageURL;
- (void)loadPermissionsPromptForTab:(id)a0;
- (void)requestPerSiteAccess:(long long)a0 completionHandler:(id /* block */)a1;
- (void)resumeDeferredLoadForTab:(id)a0;
- (BOOL)shouldShowPermissionsPrompt;
- (BOOL)shouldShowUnsupportedTargetMessage;
- (void)showPermissionsPromptForTab:(id)a0;
- (void)showUnsupportedTargetMessageForTab:(id)a0;

@end

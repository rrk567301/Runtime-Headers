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
- (void)inspectorExtension:(id)a0 didShowTabWithIdentifier:(id)a1;
- (void)inspectorExtension:(id)a0 didHideTabWithIdentifier:(id)a1;
- (void)inspectorExtension:(id)a0 didNavigateTabWithIdentifier:(id)a1 newURL:(id)a2;
- (void)inspectorExtension:(id)a0 inspectedPageDidNavigate:(id)a1;
- (void)_websiteDataPermissionsChanged:(id)a0;
- (id)inspectedPageURL;
- (id)_tabForInspectedPage;
- (BOOL)shouldShowPermissionsPrompt;
- (BOOL)shouldShowUnsupportedTargetMessage;
- (BOOL)canReopenURLInNewTab:(id)a0;
- (void)_requestPerSiteAccess:(long long)a0 inspectedTab:(id)a1 withDomains:(id)a2 completionHandler:(id /* block */)a3;
- (id)_windowForExtensionHost;
- (id)_payloadForUnsupportedTargetMessageInTab:(id)a0;
- (void)_sendPermissionsPromptPayload:(id)a0 toInspectorExtensionTabWithID:(id)a1 completionHandler:(id /* block */)a2;
- (id)_payloadForExtensionTabPermissionPrompt;
- (void)requestPerSiteAccess:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_evaluatePermissionsForInspectedPageAndShowPromptIfNeeded;
- (void)resumeDeferredLoadForTab:(id)a0;
- (void)loadPermissionsPromptForTab:(id)a0;
- (void)showUnsupportedTargetMessageForTab:(id)a0;
- (void)showPermissionsPromptForTab:(id)a0;
- (id)initWithWebExtension:(id)a0 inspectorExtension:(id)a1;

@end

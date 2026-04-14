@class WKWebView;
@protocol WBSWebExtensionsControllerSelectorForwarderDelegate;

@interface WBSWebExtensionsControllerSelectorForwarder : NSObject {
    id<WBSWebExtensionsControllerSelectorForwarderDelegate> _delegate;
    WKWebView *_webView;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)setZoomForTab:(id)a0 zoomFactor:(id)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)addListenerForExtensionWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)captureVisibleTabInWindow:(id)a0 format:(id)a1 quality:(id)a2 extensionIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)connectFromPortWithID:(id)a0 fromExtensionWithID:(id)a1 toApplicationWithID:(id)a2;
- (void)connectFromPortWithID:(id)a0 fromExtensionWithID:(id)a1 toExtensionWithID:(id)a2 connectInfo:(id)a3 rawSenderInfo:(id)a4;
- (void)connectFromPortWithID:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(double)a2 connectInfo:(id)a3 rawSenderInfo:(id)a4;
- (void)connectFromPortWithIDFromWebPage:(id)a0 toExtensionWithID:(id)a1 connectInfo:(id)a2 rawSenderInfo:(id)a3;
- (void)createInspectorTabWithName:(id)a0 tabIconURL:(id)a1 sourceURL:(id)a2 extensionIdentifier:(id)a3 completionHandler:(id /* block */)a4;
- (void)createTabWithProperties:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)createWindowWithCreateData:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteDatabaseForStorageOfType:(long long)a0 forExtensionWithUniqueIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteValuesForKeys:(id)a0 fromStorageOfType:(long long)a1 forExtensionWithUniqueIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)detectLanguageForTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)evaluateScript:(id)a0 frameURL:(id)a1 contextSecurityOrigin:(id)a2 useContentScriptContext:(BOOL)a3 extensionIdentifier:(id)a4 completionHandler:(id /* block */)a5;
- (void)executeScriptWithDetails:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(id)a2 callingAPIName:(id)a3 completionHandler:(id /* block */)a4;
- (void)getInformationForTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getInformationForWindow:(id)a0 getInfo:(id)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getStorageSizeForAllKeysInStorageOfType:(long long)a0 forExtensionWithUniqueIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getStorageSizeForKeys:(id)a0 inStorageOfType:(long long)a1 forExtensionWithUniqueIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getValuesForAllKeysFromStorageOfType:(long long)a0 forExtensionWithUniqueIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)getValuesForKeys:(id)a0 fromStorageOfType:(long long)a1 forExtensionWithUniqueIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)getZoomForTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)goBackInTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)goForwardInTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithWebView:(id)a0 delegate:(id)a1;
- (void)insertCSSWithDetails:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(id)a2 callingAPIName:(id)a3 completionHandler:(id /* block */)a4;
- (void)openOptionsPageForExtensionIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)openPopupForWindow:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)queryTabs:(id)a0 forExtensionWithID:(id)a1 completionHandler:(id /* block */)a2;
- (void)reloadIgnoringCache:(BOOL)a0 userAgent:(id)a1 injectedScript:(id)a2 extensionIdentifier:(id)a3;
- (void)reloadTab:(id)a0 reloadFromOrigin:(BOOL)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeCSSWithDetails:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(id)a2 callingAPIName:(id)a3 completionHandler:(id /* block */)a4;
- (void)removeListenerForExtensionWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void)removeWindow:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)sendMessage:(id)a0 fromExtensionWithID:(id)a1 toExtensionWithID:(id)a2 rawSenderInfo:(id)a3;
- (void)sendMessage:(id)a0 fromExtensionWithID:(id)a1 toExtensionWithID:(id)a2 rawSenderInfo:(id)a3 replyHandler:(id /* block */)a4;
- (void)sendMessage:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(double)a2 withOptions:(id)a3 rawSenderInfo:(id)a4;
- (void)sendMessage:(id)a0 fromExtensionWithID:(id)a1 toTabWithID:(double)a2 withOptions:(id)a3 rawSenderInfo:(id)a4 responseCallback:(id /* block */)a5;
- (void)sendMessageFromWebPage:(id)a0 toExtensionWithID:(id)a1 options:(id)a2 rawSenderInfo:(id)a3 replyHandler:(id /* block */)a4;
- (void)setKeyedData:(id)a0 inStorageOfType:(long long)a1 forExtensionWithUniqueIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)toggleReaderModeForTab:(id)a0 extensionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateTab:(id)a0 properties:(id)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)updateWindow:(id)a0 withInfo:(id)a1 extensionIdentifier:(id)a2 completionHandler:(id /* block */)a3;

@end

@class NSString, SafariAppExtensionData;

@interface SafariAppExtensionMessageHandler : NSObject <WKScriptMessageHandler> {
    SafariAppExtensionData *_appExtensionData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)userContentController:(id)a0 didReceiveScriptMessage:(id)a1;
- (void)_addEventListener:(id)a0;
- (void)_dispatchMessageToExtension:(id)a0;
- (void)_removeEventListener:(id)a0;
- (void)_setContextMenuEventUserInfo:(id)a0;
- (id)initWithAppExtensionData:(id)a0;

@end

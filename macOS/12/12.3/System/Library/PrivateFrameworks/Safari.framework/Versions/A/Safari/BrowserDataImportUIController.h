@class NSXPCConnection, AuthorizationRequest, NSMenuItem;

@interface BrowserDataImportUIController : NSObject {
    NSMenuItem *_importFromSeparatorMenuItem;
    NSMenuItem *_bookmarksHTMLFileMenuItem;
    BOOL _didGenerateBrowserMenuItems;
    BOOL _isCheckingForImportableData;
    NSMenuItem *_passwordsCSVFileMenuItem;
    NSXPCConnection *_connectionToCredentialExtractionService;
    AuthorizationRequest *_authorizationRequest;
}

@property (readonly, nonatomic) NSMenuItem *importFromMenuItem;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImportFromMenuItem:(id)a0;
- (void)updateItemsInMenu:(id)a0;
- (void)_importPasswordsFromCSV:(id)a0;
- (void)_dataImportingDidUpdateNotification:(id)a0;
- (void)_didUpdateMenuItemsAfterDataDirectoryInspectionFromDataTypes:(unsigned long long)a0 withBrowserBundleURL:(id)a1;
- (void)_refreshBrowserMenuItems:(id)a0;
- (void)importFromBrowser:(id)a0;
- (BOOL)_canCurrentlyImport;
- (void)_importPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)importPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)_chooseFileToImportPasswordsFromCSVAnchoredToWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)_importFromFileURL:(id)a0 window:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)validate_importFromBrowser:(id)a0;
- (void)importPasswordsFromCSV;
- (void)cancelImportAuthorizationRequestIfNecessary;

@end

@class WebAppSettings, _WKApplicationManifest;

@interface WebAppDocumentController : NSDocumentController {
    BOOL _hasRestoredDocuments;
}

@property (retain, nonatomic) _WKApplicationManifest *manifest;
@property (retain, nonatomic) WebAppSettings *settings;

+ (id)sharedDocumentController;

- (void).cxx_destruct;
- (id)initWithManifest:(id)a0;
- (void)_addMenusToMainMenu:(id)a0;
- (void)_restoreDocumentFromWindowState:(id)a0 reusingDocument:(id)a1 forTabGroup:(id *)a2 mainWindow:(id *)a3 selectedWindowMapping:(id)a4;
- (void)_updateDocumentsState:(id)a0 withDocument:(id)a1;
- (id)frontmostBrowserDocument;
- (id)frontmostBrowserDocumentPassingTest:(id /* block */)a0;
- (id)goToURL:(id)a0 windowPolicy:(long long)a1;
- (void)persistDocumentsAtomically:(BOOL)a0;
- (void)restoreDocumentsIfNeeded;

@end

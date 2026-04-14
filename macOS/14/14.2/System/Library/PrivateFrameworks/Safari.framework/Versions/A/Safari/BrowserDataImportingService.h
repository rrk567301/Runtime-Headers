@interface BrowserDataImportingService : NSObject <BrowserDataImportingService>

- (void)exit;
- (void)_createImporterWithBrowserDataDirectories:(id)a0 importEngineClass:(Class)a1 replyBlock:(id /* block */)a2;
- (void)createBookmarkImporterWithBrowserDataDirectories:(id)a0 reply:(id /* block */)a1;
- (void)createCredentialImporterWithBrowserDataDirectories:(id)a0 reply:(id /* block */)a1;
- (void)createHistoryImporterWithBrowserDataDirectories:(id)a0 reply:(id /* block */)a1;

@end

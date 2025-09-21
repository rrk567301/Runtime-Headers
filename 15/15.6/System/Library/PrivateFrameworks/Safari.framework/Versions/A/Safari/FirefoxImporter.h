@class FirefoxDataDirectories;

@interface FirefoxImporter : BrowserImportEngine

@property (readonly, nonatomic) FirefoxDataDirectories *dataDirectories;

- (char)_openDatabaseAtURL:(id)a0 logDescription:(id)a1 performBlock:(id /* block */)a2;
- (id)initWithDataDirectories:(id)a0;
- (char)openCredentialsJSONFileAndPerformBlock:(id /* block */)a0;
- (char)openLegacyCredentialsDatabaseAndPerformBlock:(id /* block */)a0;
- (char)openPlacesDatabaseAndPerformBlock:(id /* block */)a0;

@end

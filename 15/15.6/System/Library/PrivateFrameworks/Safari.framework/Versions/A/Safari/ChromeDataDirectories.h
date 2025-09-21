@class NSURL;

@interface ChromeDataDirectories : BrowserDataDirectories

@property (readonly, nonatomic) NSURL *bookmarksFileURL;
@property (readonly, nonatomic) NSURL *historyDatabaseURL;
@property (readonly, nonatomic) NSURL *loginDatabaseURL;

+ (char)supportsSecureCoding;

- (Class)bookmarkImportEngineClass;
- (Class)credentialImporterClass;
- (Class)historyImporterClass;

@end

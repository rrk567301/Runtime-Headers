@interface REMPaths : NSObject

+ (id)createTemporaryFileDirectoryURLIfNeededWithError:(id *)a0;
+ (BOOL)_legacy_shouldUseCentralizedDataPath;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (id)legacy_centralizedDataPath;
+ (id)legacy_applicationDocumentsURL;
+ (void)unitTest_setLegacyApplicationDocumentsURL:(id)a0;
+ (id)attributesForGroupContainerDirectory;
+ (id)dataSeparationEnabled_applicationDocumentsURL;

@end

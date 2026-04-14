@interface REMPaths : NSObject

+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (id)legacy_applicationDocumentsURL;
+ (id)createTemporaryFileDirectoryURLIfNeededWithError:(id *)a0;
+ (void)unitTest_setLegacyApplicationDocumentsURL:(id)a0;
+ (id)attributesForGroupContainerDirectory;
+ (BOOL)_legacy_shouldUseCentralizedDataPath;
+ (id)dataSeparationEnabled_applicationDocumentsURL;
+ (id)legacy_centralizedDataPath;

@end

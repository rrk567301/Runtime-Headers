@interface REMPaths : NSObject

+ (id)dataSeparationEnabled_applicationDocumentsURL;
+ (id)createTemporaryFileDirectoryURLIfNeededWithError:(id *)a0;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (id)legacy_centralizedDataPath;
+ (BOOL)_legacy_shouldUseCentralizedDataPath;
+ (id)legacy_applicationDocumentsURL;
+ (void)unitTest_setLegacyApplicationDocumentsURL:(id)a0;
+ (id)attributesForGroupContainerDirectory;

@end

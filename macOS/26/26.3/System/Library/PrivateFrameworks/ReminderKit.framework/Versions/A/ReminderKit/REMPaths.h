@interface REMPaths : NSObject

+ (id)createTemporaryFileDirectoryURLIfNeededWithError:(id *)a0;
+ (id)legacy_applicationDocumentsURL;
+ (id)dataSeparationEnabled_applicationDocumentsURL;
+ (id)legacy_centralizedDataPath;
+ (id)attributesForGroupContainerDirectory;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (void)unitTest_setLegacyApplicationDocumentsURL:(id)a0;
+ (BOOL)_legacy_shouldUseCentralizedDataPath;

@end

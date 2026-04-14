@class NSURL;

@interface REMPaths : NSObject

@property (class, readonly, nonatomic) NSURL *applicationDocumentsURL;
@property (class, readonly, nonatomic) NSURL *reminderDataURL;
@property (class, readonly, nonatomic) NSURL *locationBundleURL;

+ (id)MLModelURL;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (BOOL)_shouldUseCentralizedDataPath;
+ (id)attributesForGroupContainerDirectory;
+ (id)containerURLForMLModel;
+ (id)mainContainerBackupURL;
+ (id)mainContainerURL;
+ (id)pptSentinelURLInContainerURL:(id)a0;
+ (void)setApplicationDocumentsURL:(id)a0;
+ (id)temporaryMLModelURL;
+ (id)urlForIsolatedContainerWithIdentifier:(id)a0;

@end

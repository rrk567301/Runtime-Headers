@class NSURL;

@interface REMPaths : NSObject

@property (class, readonly, nonatomic) NSURL *applicationDocumentsURL;
@property (class, readonly, nonatomic) NSURL *reminderDataURL;
@property (class, readonly, nonatomic) NSURL *locationBundleURL;

+ (BOOL)_shouldUseCentralizedDataPath;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (id)attributesForGroupContainerDirectory;
+ (id)mainContainerURL;
+ (void)setApplicationDocumentsURL:(id)a0;
+ (id)mainContainerBackupURL;
+ (id)pptSentinelURLInContainerURL:(id)a0;
+ (id)urlForIsolatedContainerWithIdentifier:(id)a0;

@end

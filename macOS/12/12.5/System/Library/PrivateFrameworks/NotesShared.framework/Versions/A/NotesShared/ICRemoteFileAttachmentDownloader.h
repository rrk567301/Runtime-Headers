@class NSOperationQueue, NSMutableDictionary;

@interface ICRemoteFileAttachmentDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)sharedDownloader;
+ (BOOL)needsToDownloadRemoteFileAttachments;
+ (id)allUndownloadedLegacyAttachmentsInContext:(id)a0;
+ (void)releaseSharedDownloaderIfPossible;
+ (void)initializeDownloaderAfterDelayIfNecessary;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadRemoteFileForAttachment:(id)a0;
- (void)reachabilityChanged:(id)a0;
- (void)resumeDownloadsAfterDelay;
- (void)downloadUndownloadedLegacyAttachments;
- (void)downloadRemoteFileForAttachmentObjectID:(id)a0;

@end

@class NSOperationQueue, NSMutableDictionary;

@interface ICRemoteFileAttachmentDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)sharedDownloader;
+ (void)initializeDownloaderAfterDelayIfNecessary;
+ (void)releaseSharedDownloaderIfPossible;
+ (BOOL)needsToDownloadRemoteFileAttachments;
+ (id)allUndownloadedLegacyAttachmentsInContext:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reachabilityChanged:(id)a0;
- (void)downloadUndownloadedLegacyAttachments;
- (void)resumeDownloadsAfterDelay;
- (void)downloadRemoteFileForAttachment:(id)a0;
- (void)downloadRemoteFileForAttachmentObjectID:(id)a0;

@end

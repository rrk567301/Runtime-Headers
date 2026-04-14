@class NSOperationQueue, NSMutableDictionary;

@interface ICRemoteFileAttachmentDownloader : NSObject

@property (retain, nonatomic) NSMutableDictionary *operationsByAttachmentIdentifier;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

+ (id)allUndownloadedLegacyAttachmentsInContext:(id)a0;
+ (void)initializeDownloaderAfterDelayIfNecessary;
+ (BOOL)needsToDownloadRemoteFileAttachments;
+ (void)releaseSharedDownloaderIfPossible;
+ (id)sharedDownloader;

- (void)dealloc;
- (void)reachabilityChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)downloadRemoteFileForAttachment:(id)a0;
- (void)downloadRemoteFileForAttachmentObjectID:(id)a0;
- (void)downloadUndownloadedLegacyAttachments;
- (void)resumeDownloadsAfterDelay;

@end

@class NSOperationQueue, NSMutableDictionary;

@interface QLThumbnailGenerationQueue : NSObject

@property (retain) NSMutableDictionary *queuedURLs;
@property (retain) NSOperationQueue *queue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)enqueueThumbnailGenerationIfNeededForDocumentAtURL:(id)a0 atBackgroundPriority:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)noteThumbnailGenerationQueuedExternallyForDocumentAtURL:(id)a0;

@end

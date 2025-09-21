@class NSObject, GSAddition, NSDictionary, NSURL, NSError, NSData, QLThumbnailAddition;
@protocol QLThumbnailGenerationRequest, NSXPCProxyCreating, OS_os_activity;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {
    NSObject<OS_os_activity> *_retrievalActivity;
    NSObject<OS_os_activity> *_generationActivity;
}

@property (retain) NSError *error;
@property (nonatomic, getter=isExecuting) char executing;
@property (nonatomic, getter=isFinished) char finished;
@property (retain) id<QLThumbnailGenerationRequest, NSXPCProxyCreating> thumbnailRequest;
@property (retain) NSURL *documentURL;
@property (retain) NSURL *destinationURL;
@property char allowsThumbnailGeneration;
@property char generateThumbnailsAtBackgroundPriority;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) char thumbnailWasAutomaticallyGenerated;
@property (readonly) GSAddition *genStoreAddition;
@property (readonly) char thumbnailWasJustAutomaticallyGenerated;
@property (readonly) QLThumbnailAddition *addition;

+ (char)canMostRecentClientsGenerateThumbnailsForUTI:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (char)isConcurrent;
- (void)main;
- (void)_finishWithError:(id)a0;
- (char)_finishIfNeeded;
- (void)_afterDeterminingWhetherWeCanGenerate:(char)a0;
- (void)_afterThumbnailIsGenerated;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)a0;
- (void)_generateThumbnail;
- (void)afterThumbnailIsPutInGenstore;
- (id)initWithDocumentAtURL:(id)a0;

@end

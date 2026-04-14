@class NSOperationQueue, NSMutableArray;

@interface MUIRemoteImageCollector : NSObject {
    NSMutableArray *_attachments;
}

@property (readonly, nonatomic) NSOperationQueue *downloadQueue;

- (void).cxx_destruct;
- (id)init;
- (void)downloadedAttachmentCompleted:(id)a0;
- (id)initWithAttachments:(id)a0;

@end

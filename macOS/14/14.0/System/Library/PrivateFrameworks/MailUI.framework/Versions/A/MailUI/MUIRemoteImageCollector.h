@class NSOperationQueue, NSMutableArray;

@interface MUIRemoteImageCollector : NSObject {
    NSMutableArray *_attachments;
}

@property (readonly, nonatomic) NSOperationQueue *downloadQueue;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAttachments:(id)a0;

@end

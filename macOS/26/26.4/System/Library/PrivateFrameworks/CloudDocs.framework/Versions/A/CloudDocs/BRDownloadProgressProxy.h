@class NSMetadataQuery, NSOperationQueue, NSString;

@interface BRDownloadProgressProxy : NSProgress {
    NSMetadataQuery *_query;
    NSOperationQueue *_queue;
    NSString *_personaID;
}

- (void)stop;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (void)_queryDidReceiveUpdate:(id)a0;

@end

@class NSURL;

@interface BRSharingCopyShareTokenOperation : BRShareOperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ shareTokenCompletionBlock;
@property (copy) id /* block */ shareAndBaseTokenCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0;
- (id)initWithItemID:(id)a0;
- (void).cxx_destruct;

@end

@class NSURL;

@interface BRSharingCopyShareTokenOperation : BRShareOperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ shareTokenCompletionBlock;
@property (copy) id /* block */ shareAndBaseTokenCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)initWithItemID:(id)a0;

@end

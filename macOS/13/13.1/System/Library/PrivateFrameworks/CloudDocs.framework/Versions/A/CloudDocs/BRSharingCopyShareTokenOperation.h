@class NSURL;

@interface BRSharingCopyShareTokenOperation : BRShareOperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ shareTokenCompletionBlock;
@property (copy) id /* block */ shareAndBaseTokenCompletionBlock;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;

@end

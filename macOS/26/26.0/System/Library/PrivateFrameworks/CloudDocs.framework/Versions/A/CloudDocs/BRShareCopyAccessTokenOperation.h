@interface BRShareCopyAccessTokenOperation : BRShareOperation

@property (copy) id /* block */ shareCopyAccessTokenCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end

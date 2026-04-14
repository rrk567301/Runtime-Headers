@interface BRShareCopyOperation : BRShareOperation

@property (copy) id /* block */ shareCopyCompletionBlock;
@property (copy) id /* block */ rootShareCopyCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithItemID:(id)a0;
- (id)initWithURL:(id)a0;
- (void)main;
- (void).cxx_destruct;

@end

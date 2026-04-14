@interface BRSharePrepFolderForSharing : BRShareOperation

@property (copy) id /* block */ prepFolderSharingCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0;
- (void)main;
- (void).cxx_destruct;

@end

@interface BRSharePrepFolderForSharing : BRShareOperation

@property (copy) id /* block */ prepFolderSharingCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end

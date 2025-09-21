@class CKShare;

@interface BRShareSaveOperation : BRShareOperation

@property (retain, nonatomic) CKShare *share;
@property (copy) id /* block */ shareSaveCompletionBlock;

+ (char)shouldRetryShareSaveOnError:(id)a0;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithShare:(id)a0;
- (id)initWithShare:(id)a0 fileURL:(id)a1;

@end

@class NSURL;

@interface BRSharingCopyShareInfoOperation : BROperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ copyShareInfoCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end

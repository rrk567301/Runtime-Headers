@class NSURL;

@interface BRSharingCopyEtagOperation : BROperation {
    NSURL *_fileURL;
}

@property (copy) id /* block */ sharingEtagCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0;
- (void)main;
- (void).cxx_destruct;

@end

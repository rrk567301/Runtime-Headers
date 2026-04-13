@class NSURL;

@interface BRShareCleanSubitems : BROperation {
    NSURL *_url;
}

@property (copy) id /* block */ cleanSubitemsCompletionBlock;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;

@end

@class NSURL;

@interface BREvictItemOperation : BROperation {
    unsigned long long _section;
    NSURL *_url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;

@end

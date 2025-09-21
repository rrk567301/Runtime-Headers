@class NSURL;

@interface BREvictItemOperation : BROperation {
    struct { unsigned long long sectionID; char *function; int line; BOOL ignorePersona; } _section;
    NSURL *_url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)description;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;

@end

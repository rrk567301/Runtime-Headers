@class NSURL;

@interface BREvictItemOperation : BROperation {
    struct { unsigned long long sectionID; char *function; int line; BOOL ignorePersona; } _section;
    NSURL *_url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)main;
- (id)initWithURL:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end

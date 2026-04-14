@class NSURL;

@interface BREvictItemOperation : BROperation {
    struct { unsigned long long sectionID; char *function; int line; BOOL ignorePersona; } _section;
    NSURL *_url;
}

@property (copy) id /* block */ evictionCompletionBlock;

- (void)finishWithResult:(id)a0 error:(id)a1;
- (id)initWithURL:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)description;

@end

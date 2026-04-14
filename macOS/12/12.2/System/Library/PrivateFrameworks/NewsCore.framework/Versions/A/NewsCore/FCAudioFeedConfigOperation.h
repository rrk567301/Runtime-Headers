@class NSString;
@protocol FCContentContext;

@interface FCAudioFeedConfigOperation : FCOperation {
    id<FCContentContext> _context;
    NSString *_resultFeedConfig;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;

@end

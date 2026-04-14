@class NSString;
@protocol FCContentContext;

@interface FCAudioFeedConfigOperation : FCOperation {
    id<FCContentContext> _context;
    NSString *_resultFeedConfig;
    NSString *_resultLegacyConfig;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)initWithContext:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (void).cxx_destruct;
- (void)performOperation;
- (BOOL)validateOperation;
- (id)init;

@end

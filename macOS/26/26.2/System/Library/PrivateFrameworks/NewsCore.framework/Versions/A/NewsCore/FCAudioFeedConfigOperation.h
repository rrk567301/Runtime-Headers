@class NSString;
@protocol FCContentContext;

@interface FCAudioFeedConfigOperation : FCOperation {
    id<FCContentContext> _context;
    NSString *_resultFeedConfig;
    NSString *_resultLegacyConfig;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (BOOL)validateOperation;
- (void)operationWillFinishWithError:(id)a0;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end

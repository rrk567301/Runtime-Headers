@class NSString;
@protocol FCContentContext;

@interface FCAudioConfigurationOperation : FCOperation {
    id<FCContentContext> _context;
    NSString *_resultConfigString;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (void)performOperation;
- (id)initWithContext:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (id)init;
- (void).cxx_destruct;

@end

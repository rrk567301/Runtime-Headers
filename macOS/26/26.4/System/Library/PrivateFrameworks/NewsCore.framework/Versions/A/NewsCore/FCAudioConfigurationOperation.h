@class NSString;
@protocol FCContentContext;

@interface FCAudioConfigurationOperation : FCOperation {
    id<FCContentContext> _context;
    NSString *_resultConfigString;
}

@property (copy, nonatomic) id /* block */ fetchCompletionHandler;

- (id)initWithContext:(id)a0;
- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void)performOperation;
- (void).cxx_destruct;
- (id)init;

@end

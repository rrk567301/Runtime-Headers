@class LNActionExecutor, NSUUID, LNSuccessResult, LNAction;

@interface LNPerformActionConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (readonly, nonatomic) LNAction *action;
@property (readonly, nonatomic) LNActionExecutor *executor;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) LNSuccessResult *result;
@property (readonly, nonatomic) NSUUID *executionUUID;
@property (readonly, nonatomic) BOOL supportsCancellation;

- (void)finishWithError:(id)a0;
- (double)timeout;
- (void).cxx_destruct;
- (void)start;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 executor:(id)a2 executorActivity:(id)a3 queue:(id)a4 completionHandler:(id /* block */)a5;
- (BOOL)invalidateAssertionsOnCompletion;

@end

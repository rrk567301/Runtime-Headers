@class LNFocusConfigurationAppContext, LNAction;

@interface LNFetchActionAppContextConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) LNAction *action;
@property (copy, nonatomic) LNFocusConfigurationAppContext *result;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 completionHandler:(id /* block */)a2;

@end

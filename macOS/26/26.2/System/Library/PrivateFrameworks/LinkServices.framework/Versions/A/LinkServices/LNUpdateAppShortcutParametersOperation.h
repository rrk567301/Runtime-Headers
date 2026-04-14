@interface LNUpdateAppShortcutParametersOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (void)start;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end

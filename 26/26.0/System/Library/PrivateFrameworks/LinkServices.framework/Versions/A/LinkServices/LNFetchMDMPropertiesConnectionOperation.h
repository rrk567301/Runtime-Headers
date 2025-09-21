@class NSString, LNAction;

@interface LNFetchMDMPropertiesConnectionOperation : LNInterfaceConnectionOperation

@property (readonly, nonatomic) LNAction *action;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 action:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end

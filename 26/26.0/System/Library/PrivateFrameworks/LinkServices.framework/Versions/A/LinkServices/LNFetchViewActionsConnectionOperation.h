@class NSArray;

@interface LNFetchViewActionsConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *result;

- (void)start;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end

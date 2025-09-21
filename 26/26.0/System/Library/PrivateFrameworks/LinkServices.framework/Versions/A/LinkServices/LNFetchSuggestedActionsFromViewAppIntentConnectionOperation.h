@class NSArray;

@interface LNFetchSuggestedActionsFromViewAppIntentConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)start;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;

@end

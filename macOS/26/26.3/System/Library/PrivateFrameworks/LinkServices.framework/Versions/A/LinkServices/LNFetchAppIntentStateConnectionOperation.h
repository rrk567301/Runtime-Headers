@class NSDictionary, NSArray;

@interface LNFetchAppIntentStateConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) NSDictionary *results;
@property (copy, nonatomic) NSArray *appIntentIdentifiers;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 appIntentIdentifiers:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end

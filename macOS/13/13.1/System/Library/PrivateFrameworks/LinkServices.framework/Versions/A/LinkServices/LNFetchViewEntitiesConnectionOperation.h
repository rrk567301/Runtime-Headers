@class NSArray;

@interface LNFetchViewEntitiesConnectionOperation : LNInterfaceConnectionOperation

@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSArray *result;
@property (copy) NSArray *interactionIDs;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithConnectionInterface:(id)a0 interactionIDs:(id)a1 completionHandler:(id /* block */)a2;

@end

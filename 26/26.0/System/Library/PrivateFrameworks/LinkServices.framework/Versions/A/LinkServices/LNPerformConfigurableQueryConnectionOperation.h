@class LNConfigurableQueryRequest, LNQueryOutput;

@interface LNPerformConfigurableQueryConnectionOperation : LNInterfaceConnectionOperation

@property (readonly, nonatomic) LNConfigurableQueryRequest *queryRequest;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) LNQueryOutput *output;

- (void)start;
- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 query:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end

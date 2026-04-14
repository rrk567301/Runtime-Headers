@interface WFFavoriteLocationRequest : WFTask

@property (readonly, nonatomic) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)handleResponse:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (void)startWithService:(id)a0;
- (void)handleCancellation;
- (id)initWithResultHandler:(id /* block */)a0;

@end

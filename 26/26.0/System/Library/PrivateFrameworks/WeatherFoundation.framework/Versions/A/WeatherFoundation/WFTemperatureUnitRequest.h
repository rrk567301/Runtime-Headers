@interface WFTemperatureUnitRequest : WFTask

@property (copy, nonatomic) id /* block */ resultHandler;

- (void)cleanup;
- (void)handleResponse:(id)a0;
- (BOOL)requiresResponse;
- (void).cxx_destruct;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithResultHandler:(id /* block */)a0;
- (void)startWithService:(id)a0;

@end

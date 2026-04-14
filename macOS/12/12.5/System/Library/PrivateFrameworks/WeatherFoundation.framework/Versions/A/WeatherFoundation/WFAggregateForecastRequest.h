@class WFLocation;

@interface WFAggregateForecastRequest : WFTask

@property (copy, nonatomic) WFLocation *location;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleCancellation;

@end

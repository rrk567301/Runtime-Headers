@class WFLocation;

@interface WFAggregateForecastRequest : WFTask

@property (copy, nonatomic) WFLocation *location;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void).cxx_destruct;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (id)initWithLocation:(id)a0 completionHandler:(id /* block */)a1;

@end

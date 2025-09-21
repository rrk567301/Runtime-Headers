@interface IMServiceReachabilityResponseBlockHandler : NSObject <IMServiceReachabilityResponseHandler>

@property (copy, nonatomic) id /* block */ block;

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)reachabilityRequest:(id)a0 updatedWithResult:(id)a1;

@end

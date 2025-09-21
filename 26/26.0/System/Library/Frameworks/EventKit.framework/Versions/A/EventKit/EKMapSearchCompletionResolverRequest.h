@class EKMapSearchCompletion, MKLocalSearch;

@interface EKMapSearchCompletionResolverRequest : NSObject <CalCancelable> {
    MKLocalSearch *_localSearch;
}

@property (readonly, nonatomic) EKMapSearchCompletion *mapSearchCompletion;
@property (readonly, nonatomic) id /* block */ completionHandler;

- (void)cancel;
- (void).cxx_destruct;
- (void)beginResolution;
- (id)initWithMapSearchCompletion:(id)a0 completionHandler:(id /* block */)a1;

@end

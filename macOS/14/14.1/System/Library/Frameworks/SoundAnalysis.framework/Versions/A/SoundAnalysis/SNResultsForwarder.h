@interface SNResultsForwarder : NSObject <SNResultsObserving> {
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ resultsHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;
- (id)initWithCompletionHandler:(id /* block */)a0 resultsHandler:(id /* block */)a1;

@end

@interface SoundAnalysis.SNResultsForwarder : NSObject <SNResultsObserving> {
    void /* unknown type, empty encoding */ completionHandler;
    void /* unknown type, empty encoding */ resultsHandler;
}

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;

@end

@interface ContextualUnderstanding.ResultsObserver : NSObject <SNResultsObserving> {
    void /* unknown type, empty encoding */ offsetDate;
    void /* unknown type, empty encoding */ foundSounds;
}

- (id)init;
- (void).cxx_destruct;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (void)requestDidComplete:(id)a0;

@end

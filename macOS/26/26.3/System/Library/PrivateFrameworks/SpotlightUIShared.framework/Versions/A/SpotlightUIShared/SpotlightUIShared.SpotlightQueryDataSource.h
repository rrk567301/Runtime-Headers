@interface SpotlightUIShared.SpotlightQueryDataSource : NSObject <SPQueryTaskDelegate> {
    void /* unknown type, empty encoding */ currentTask;
    void /* unknown type, empty encoding */ currentQuery;
    void /* unknown type, empty encoding */ currentContinuation;
    void /* unknown type, empty encoding */ resultHandler;
    void /* unknown type, empty encoding */ signpostState;
}

- (id)init;
- (void).cxx_destruct;
- (void)processQueryResponse:(id)a0;

@end

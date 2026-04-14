@interface SpotlightUIShared.SpotlightQueryDataSource : NSObject <SPQueryTaskDelegate> {
    void /* unknown type, empty encoding */ currentTask;
    void /* unknown type, empty encoding */ currentQuery;
    void /* unknown type, empty encoding */ currentContinuation;
    void /* unknown type, empty encoding */ resultHandler;
    void /* unknown type, empty encoding */ signpostState;
}

- (void).cxx_destruct;
- (id)init;
- (void)processQueryResponse:(id)a0;

@end

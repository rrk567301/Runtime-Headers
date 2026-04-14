@interface OmniSearch.LocalSearchManager : NSObject <SPQueryTaskDelegate> {
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ queryTask;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ completionHandler;
}

- (id)init;
- (void).cxx_destruct;
- (void)processQueryResponse:(id)a0;

@end

@interface OmniSearch.LocalQueryTask : NSObject <SPQueryTaskDelegate> {
    void /* unknown type, empty encoding */ queryTask;
    void /* unknown type, empty encoding */ diagnostics;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ ecrResult;
    void /* unknown type, empty encoding */ continuation;
    void /* unknown type, empty encoding */ lock;
}

- (id)init;
- (void).cxx_destruct;
- (void)processQueryResponse:(id)a0;

@end

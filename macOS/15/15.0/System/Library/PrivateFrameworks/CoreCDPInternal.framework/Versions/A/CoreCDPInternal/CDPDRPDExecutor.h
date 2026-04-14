@class NSError;

@interface CDPDRPDExecutor : NSObject {
    void /* unknown type, empty encoding */ ledger;
    void /* unknown type, empty encoding */ sbDeleter;
    void /* unknown type, empty encoding */ resetter;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithSbDeleter:(id)a0 ledger:(id)a1 resetter:(id)a2;
- (void)performRPDWithCompletionHandler:(void (^)(NSError *))a0;

@end

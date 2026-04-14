@class NSError;

@interface CDPDRPDExecutor : NSObject {
    void /* unknown type, empty encoding */ ledger;
    void /* unknown type, empty encoding */ sbDeleter;
    void /* unknown type, empty encoding */ circleControl;
    void /* unknown type, empty encoding */ cdpContext;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithSbDeleter:(id)a0 ledger:(id)a1 circleControl:(id)a2 cdpContext:(id)a3;
- (void)performRPDWithCompletionHandler:(void (^)(unsigned long long, NSError *))a0;

@end

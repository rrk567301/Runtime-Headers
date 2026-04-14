@class NSDictionary, NSError;

@interface SafariCore.WBSPasswordEvaluationsCacheStore : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ unownedExecutor;
    void /* unknown type, empty encoding */ isForTesting;
    void /* unknown type, empty encoding */ executorQueue;
}

- (id)init;
- (void)clearAllPasswordEvaluationsWithCompletionHandler:(void (^)(void))a0;
- (void)getAllPasswordEvaluationsWithCompletionHandler:(void (^)(NSDictionary *))a0;
- (id)initForTesting:(BOOL)a0 queue:(id)a1;
- (void)writePasswordEvaluations:(NSDictionary *)a0 completionHandler:(void (^)(NSError *))a1;

@end

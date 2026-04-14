@interface AppleIDSetup.AISFlowTask : NSObject <AISFlowTaskInfoProtocol_Internal> {
    void /* unknown type, empty encoding */ cachedContinuation;
    void /* unknown type, empty encoding */ cachedTask;
}

@property (nonatomic) BOOL completed;

- (void)complete;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)waitUntilLoadedWithCompletionHandler:(void (^)(void))a0;

@end

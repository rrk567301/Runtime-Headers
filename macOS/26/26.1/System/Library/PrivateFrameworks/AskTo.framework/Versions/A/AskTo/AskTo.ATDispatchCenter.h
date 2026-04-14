@class NSSet, _TtC5AskTo16ATDispatchCenter, _TtC5AskTo10ATQuestion, NSError;

@interface AskTo.ATDispatchCenter : NSObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dispatcher;
}

@property (class, nonatomic, readonly) _TtC5AskTo16ATDispatchCenter *shared;

- (void).cxx_destruct;
- (id)init;
- (void)canAskTo:(short)a0 requiredCapabilities:(NSSet *)a1 completionHandler:(void (^)(BOOL, NSError *))a2;
- (void)send:(_TtC5AskTo10ATQuestion *)a0 to:(short)a1 completionHandler:(void (^)(NSError *))a2;

@end

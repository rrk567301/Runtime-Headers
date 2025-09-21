@class NSError, _TtC5AskTo10ATQuestion, _TtC5AskTo16ATDispatchCenter;

@interface AskTo.ATDispatchCenter : NSObject {
    void /* unknown type, empty encoding */ dispatcher;
}

@property (class, nonatomic, readonly) _TtC5AskTo16ATDispatchCenter *shared;

- (id)init;
- (void).cxx_destruct;
- (void)send:(_TtC5AskTo10ATQuestion *)a0 to:(short)a1 completionHandler:(void (^)(NSError *))a2;

@end

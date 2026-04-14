@class OS_dispatch_queue;

@interface IRHomeKitManager : NSObject {
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ _rooms;
}

@property (nonatomic, readonly) OS_dispatch_queue *queue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLLMService:(id)a0 daemonStore:(id)a1;

@end

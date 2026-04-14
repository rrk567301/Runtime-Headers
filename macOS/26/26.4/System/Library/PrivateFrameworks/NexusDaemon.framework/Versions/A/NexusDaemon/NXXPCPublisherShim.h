@class NSObject;
@protocol OS_xpc_event_publisher;

@interface NXXPCPublisherShim : NSObject {
    NSObject<OS_xpc_event_publisher> *_xpcPublisher;
}

- (void)activate;
- (void)setErrorHandler:(id /* block */)a0;
- (void)setEventHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fireToken:(unsigned long long)a0 payload:(id)a1 queue:(id)a2 replyHandler:(id /* block */)a3;
- (id)initWithStreamName:(const char *)a0 dispatchQueue:(id)a1;

@end

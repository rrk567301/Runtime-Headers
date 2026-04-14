@class CUMessageSession, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKTRSession : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_eventHandlerMap;
    CUMessageSession *_messageSession;
    NSMutableDictionary *_requestHandlerMap;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)_start;
- (void)_cancel;
- (void)_cleanup;
- (id)initWithDispatchQueue:(id)a0 messageSessionTemplate:(id)a1;

@end

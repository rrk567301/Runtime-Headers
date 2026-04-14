@class SKTRSession, CUMessageSession, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIHMDeviceSetupOperation : NSObject {
    id /* block */ _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUMessageSession *_messageSessionTemplate;
    SKTRSession *_trSession;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cancel;
- (void)_cleanup;
- (void)performWithCompletionHandler:(id /* block */)a0;
- (id)initWithDispatchQueue:(id)a0 messageSessionTemplate:(id)a1;
- (void)_performWithCompletionHandler:(id /* block */)a0;

@end

@class CUMessageSession, NSObject;
@protocol OS_dispatch_queue;

@interface SKUIHMDeviceSetupOperationHandler : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUMessageSession *_messageSessionTemplate;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)_cleanup;
- (id)initWithDispatchQueue:(id)a0 messageSessionTemplate:(id)a1;

@end

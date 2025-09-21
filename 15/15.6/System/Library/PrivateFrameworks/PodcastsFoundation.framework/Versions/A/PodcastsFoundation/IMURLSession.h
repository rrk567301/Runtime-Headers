@class NSObject;
@protocol OS_dispatch_queue;

@interface IMURLSession : AMSURLSession {
    NSObject<OS_dispatch_queue> *_syncQueue;
    long long _state;
}

@property (nonatomic) char followsRedirects;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) char isUsable;

- (void).cxx_destruct;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)invalidateAndCancel;
- (void)finishTasksAndInvalidate;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)_configureProtocolHandler;

@end

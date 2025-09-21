@class NSObject;
@protocol OS_dispatch_queue;

@interface IMURLSession : AMSURLSession {
    NSObject<OS_dispatch_queue> *_syncQueue;
    long long _state;
}

@property (nonatomic) BOOL followsRedirects;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) BOOL isUsable;

- (void)invalidateAndCancel;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1 delegateQueue:(id)a2;
- (void)finishTasksAndInvalidate;
- (void)_configureProtocolHandler;
- (void).cxx_destruct;

@end

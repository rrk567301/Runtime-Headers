@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, NSObject;

@interface AMSCB1PHARLifecycleObserver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    struct shared_ptr<AMSCore::HARNetworkProviderWrapper> { struct HARNetworkProviderWrapper *__ptr_; struct __shared_weak_count *__cntrl_; } _harNetworkProviderWrapper;
    id<NSObject> _lifecycleObserver;
    NSObject<OS_dispatch_source> *_sigTermSource;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (void)handleLifecycleEventForHARLogging;
- (void)setupSigtermHandlerForHARLogging;
- (void)setupWillResignActiveNotificationForHARLogging;

@end

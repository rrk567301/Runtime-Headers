@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    unsigned long long _nextNotificationToken;
    NSMutableDictionary *_observers;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)_deregisterHandlerWithToken:(id)a0 waitOnPending:(char)a1;
- (char)deregisterHandlerAsyncWithToken:(id)a0;
- (char)deregisterHandlerWithToken:(id)a0;
- (void)issueNotificationAsyncWithContext:(id)a0;
- (void)issueNotificationAsyncWithContext:(id)a0 callback:(id /* block */)a1;
- (id)registerWithQueue:(id)a0 handler:(id /* block */)a1;

@end

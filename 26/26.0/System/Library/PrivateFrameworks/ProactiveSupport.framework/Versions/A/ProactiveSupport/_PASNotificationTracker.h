@class NSMutableDictionary;

@interface _PASNotificationTracker : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    unsigned long long _nextNotificationToken;
    NSMutableDictionary *_observers;
}

- (void)dealloc;
- (BOOL)deregisterHandlerWithToken:(id)a0;
- (BOOL)_deregisterHandlerWithToken:(id)a0 waitOnPending:(BOOL)a1;
- (id)init;
- (void)issueNotificationAsyncWithContext:(id)a0 callback:(id /* block */)a1;
- (BOOL)deregisterHandlerAsyncWithToken:(id)a0;
- (id)registerWithQueue:(id)a0 handler:(id /* block */)a1;
- (void)issueNotificationAsyncWithContext:(id)a0;
- (void).cxx_destruct;

@end

@interface SGNotificationListener : NSObject {
    id /* block */ _callback;
    struct __CFString { } *_notification;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_notify;
- (BOOL)unsubscribe;
- (id)initWithNotification:(struct __CFString { } *)a0 callback:(id /* block */)a1;

@end

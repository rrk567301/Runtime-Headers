@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMFlickGestureManagerInternal : NSObject {
    id /* block */ fEventHandler;
    NSOperationQueue *fEventQueue;
    void *fConnection;
    NSObject<OS_dispatch_queue> *fConnectionQueue;
    BOOL fServiceEnabled;
    double fTimestamp;
    long long fEventType;
    struct Dispatcher { void /* function */ **x0; id x1; } *fFlickGestureStateDispatcher;
    BOOL fRegisteredForNotifications;
}

- (void)teardownPrivate;
- (void)dealloc;
- (id)init;

@end

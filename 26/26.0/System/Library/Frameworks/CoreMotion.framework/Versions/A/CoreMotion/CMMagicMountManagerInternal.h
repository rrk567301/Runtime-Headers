@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMMagicMountManagerInternal : NSObject {
    struct CMMagicMountStateStruct { double timestamp; long long mountStatus; } _currentMagicMountState;
    id /* block */ _magicMountStateHandler;
    NSOperationQueue *_magicMountStateQueue;
    struct Dispatcher { void /* function */ **x0; id x1; } *_magicMountStateDispatcher;
    void *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BOOL _serviceEnabled;
    BOOL _apWakesAllowed;
}

- (void)teardownPrivate;
- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void)connect;
- (void)sendAPWakesRequestPrivate;
- (void)sendServiceRequestPrivate;

@end

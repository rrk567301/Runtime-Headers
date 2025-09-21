@class BSZeroingWeakReference, NSXPCConnection;
@protocol BSNSXPCConnectionEventObserver;

@interface _BSNSXPCCallbackTracking : NSObject {
    BSZeroingWeakReference *_lock_connectionReference;
    NSXPCConnection *_lock_connection;
    id /* block */ _lock_errorHandler;
    id<BSNSXPCConnectionEventObserver> _lock_observer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _lock_invalidated;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end

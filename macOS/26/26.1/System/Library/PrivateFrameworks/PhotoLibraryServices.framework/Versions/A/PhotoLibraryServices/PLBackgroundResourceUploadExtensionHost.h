@class NSString, _EXExtensionProcess, NSXPCConnection, PLXPCTransaction, NSObject;
@protocol OS_dispatch_queue, PLBackgroundResourceUploadExtensionXPCProtocol;

@interface PLBackgroundResourceUploadExtensionHost : NSObject {
    _EXExtensionProcess *_lock_process;
    NSXPCConnection *_lock_xpcConnection;
    id<PLBackgroundResourceUploadExtensionXPCProtocol> _lock_proxy;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_timerQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLXPCTransaction *_transaction;
    BOOL _isTimerDisabled;
}

@property (retain) NSString *clientBundleIdentifier;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ continuationHandler;

- (id)_timer;
- (id)_connection;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_proxy;
- (BOOL)_isCancelled;
- (id)initWithClientBundleIdentifier:(id)a0;
- (void)_cancelWithResult:(unsigned long long)a0 force:(BOOL)a1;
- (void)_disableTimer:(id)a0;
- (BOOL)_lock_setupProxyIfNeededWithError:(id *)a0;
- (void)_performTaskOnWorkBlock:(id /* block */)a0;
- (void)_setupWithContinuationHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)processWithContinuationHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end

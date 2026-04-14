@class NSString, FBSOrientationObserverClient, FBSOrientationUpdate, NSObject;
@protocol OS_dispatch_queue;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate, BSInvalidatable> {
    FBSOrientationObserverClient *_client;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_callback_queue;
    id /* block */ _lock_handler;
    FBSOrientationUpdate *_lock_freshestUpdate;
}

@property (copy, nonatomic) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)activeInterfaceOrientation;

- (void)client:(id)a0 handleOrientationUpdate:(id)a1;
- (void)handleOrientationResetForClient:(id)a0;
- (id)_getAndSetFreshestUpdateGivenUpdate:(id)a0 forced:(BOOL)a1;
- (id)_lock_getAndSetFreshestUpdateGivenUpdate:(id)a0 forced:(BOOL)a1;
- (id)_initWithClient:(id)a0 callbackQueue:(id)a1;
- (void)invalidate;
- (void)_lock_setHandler:(id /* block */)a0;
- (void)dealloc;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)activeInterfaceOrientation;
- (id)init;

@end

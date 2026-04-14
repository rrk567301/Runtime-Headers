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

- (void)_lock_setHandler:(id /* block */)a0;
- (void)client:(id)a0 handleOrientationUpdate:(id)a1;
- (long long)activeInterfaceOrientation;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_lock_getAndSetFreshestUpdateGivenUpdate:(id)a0 forced:(BOOL)a1;
- (id)init;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)a0;
- (id)_initWithClient:(id)a0 callbackQueue:(id)a1;
- (id)_getAndSetFreshestUpdateGivenUpdate:(id)a0 forced:(BOOL)a1;
- (void)dealloc;
- (void)handleOrientationResetForClient:(id)a0;

@end

@class SFService, NSObject;
@protocol OS_dispatch_queue;

@interface SFProxHandoffService : NSObject {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    SFService *_service;
    int _serviceState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)_activated;
- (void)_cleanup;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)description;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_completedWithError:(id)a0;
- (void)_serviceStart;

@end

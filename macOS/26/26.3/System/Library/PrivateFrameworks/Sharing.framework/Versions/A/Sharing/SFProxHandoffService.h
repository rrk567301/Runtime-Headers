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

- (void)invalidate;
- (void)_activated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_cleanup;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_completedWithError:(id)a0;
- (void)_serviceStart;

@end

@class INDaemonConnection, NSDate;
@protocol NSObject;

@interface ICQAMSFlowManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flowLock;
    BOOL _isFlowPresented;
    NSDate *_flowStartTime;
    INDaemonConnection *_activeDaemonConnection;
    id<NSObject> _foregroundObserverToken;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)_enrichedParametersFromParameters:(id)a0 bundleId:(id)a1 isICQ:(BOOL)a2;
- (void)_handleFlowCompletionWithSuccess:(BOOL)a0 error:(id)a1 userCompletion:(id /* block */)a2;
- (BOOL)_tryStartFlowWithCompletion:(id /* block */)a0;
- (void)beginFlowWithParameters:(id)a0 completion:(id /* block */)a1;

@end

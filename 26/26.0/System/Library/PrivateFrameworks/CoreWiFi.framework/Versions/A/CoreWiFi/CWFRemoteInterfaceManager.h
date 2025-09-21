@class CWFInterface, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFRemoteInterfaceManager : NSObject

@property (retain, nonatomic) CWFInterface *interface;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *interfaceDeactivationTimer;
@property (nonatomic) unsigned long long requestsInProgress;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_activateInterface;
- (void)_deactivateInterface;
- (id)_defaultScanParameters;
- (void)_invalidateInterfaceDeactivationTimer;
- (BOOL)_isInterfaceDeactivationTimerValid;
- (void)_startInterfaceDeactivationTimerIfNeeded;
- (void)associateNetwork:(id)a0 password:(id)a1 completion:(id /* block */)a2;
- (void)scanAvailableNetworksWithCompletion:(id /* block */)a0;
- (void)wifiStatusWithCompletion:(id /* block */)a0;

@end

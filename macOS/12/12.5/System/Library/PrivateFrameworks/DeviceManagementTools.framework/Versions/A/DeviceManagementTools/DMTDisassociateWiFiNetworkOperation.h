@class NSObject;
@protocol OS_dispatch_queue;

@interface DMTDisassociateWiFiNetworkOperation : CATOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *disassociateQueue;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (void)disassociateNetwork;
- (void)disassociateCurrentNetworkWithInterface:(id)a0;

@end

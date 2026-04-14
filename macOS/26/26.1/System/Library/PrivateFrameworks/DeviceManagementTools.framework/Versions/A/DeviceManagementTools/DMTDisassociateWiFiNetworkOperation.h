@class NSObject;
@protocol OS_dispatch_queue;

@interface DMTDisassociateWiFiNetworkOperation : CATOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *disassociateQueue;

- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)init;
- (void)disassociateCurrentNetworkWithInterface:(id)a0;
- (void)disassociateNetwork;

@end

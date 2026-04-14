@class NSObject;
@protocol OS_dispatch_queue;

@interface DMTDisassociateWiFiNetworkOperation : CATOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *disassociateQueue;

- (BOOL)isAsynchronous;
- (void)main;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)disassociateCurrentNetworkWithInterface:(id)a0;
- (void)disassociateNetwork;

@end

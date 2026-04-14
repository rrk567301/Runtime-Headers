@class NSObject;
@protocol OS_dispatch_queue;

@interface DMTDisassociateWiFiNetworkOperation : CATOperation

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *disassociateQueue;

- (void)cancel;
- (BOOL)isAsynchronous;
- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)disassociateCurrentNetworkWithInterface:(id)a0;
- (void)disassociateNetwork;

@end

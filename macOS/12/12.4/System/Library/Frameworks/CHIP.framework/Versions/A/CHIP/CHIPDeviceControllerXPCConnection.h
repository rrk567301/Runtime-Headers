@class NSMutableDictionary, NSXPCInterface, CHIPDeviceControllerXPCProxyHandle, NSObject;
@protocol OS_dispatch_queue;

@interface CHIPDeviceControllerXPCConnection : NSObject

@property (readonly, nonatomic) NSXPCInterface *remoteDeviceServerProtocol;
@property (readonly, nonatomic) NSXPCInterface *remoteDeviceClientProtocol;
@property (readonly, nonatomic) id /* block */ connectBlock;
@property (weak, nonatomic) CHIPDeviceControllerXPCProxyHandle *proxyHandle;
@property (retain, nonatomic) CHIPDeviceControllerXPCProxyHandle *proxyRetainerForReports;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSMutableDictionary *reportRegistry;

+ (id)connectionWithWorkQueue:(id)a0 connectBlock:(id /* block */)a1;

- (void).cxx_destruct;
- (void)handleReportWithController:(id)a0 nodeId:(unsigned long long)a1 value:(id)a2 error:(id)a3;
- (id)initWithWorkQueue:(id)a0 connectBlock:(id /* block */)a1;
- (void)getProxyHandleWithCompletion:(id /* block */)a0;
- (void)registerReportHandlerWithController:(id)a0 nodeId:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)deregisterReportHandlersWithController:(id)a0 nodeId:(unsigned long long)a1 completion:(id /* block */)a2;

@end

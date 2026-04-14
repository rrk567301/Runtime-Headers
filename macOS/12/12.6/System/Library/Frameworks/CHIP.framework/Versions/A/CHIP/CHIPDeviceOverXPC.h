@class CHIPDeviceControllerXPCConnection;
@protocol NSCopying;

@interface CHIPDeviceOverXPC : CHIPDevice

@property (readonly, nonatomic) id<NSCopying> controller;
@property (readonly, nonatomic) unsigned long long nodeId;
@property (readonly, nonatomic) CHIPDeviceControllerXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)subscribeWithQueue:(id)a0 minInterval:(unsigned short)a1 maxInterval:(unsigned short)a2 params:(id)a3 cacheContainer:(id)a4 reportHandler:(id /* block */)a5 subscriptionEstablished:(id /* block */)a6;
- (void)readAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 params:(id)a3 clientQueue:(id)a4 completion:(id /* block */)a5;
- (void)writeAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 value:(id)a3 timedWriteTimeout:(id)a4 clientQueue:(id)a5 completion:(id /* block */)a6;
- (void)invokeCommandWithEndpointId:(id)a0 clusterId:(id)a1 commandId:(id)a2 commandFields:(id)a3 timedInvokeTimeout:(id)a4 clientQueue:(id)a5 completion:(id /* block */)a6;
- (void)subscribeAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 minInterval:(id)a3 maxInterval:(id)a4 params:(id)a5 clientQueue:(id)a6 reportHandler:(id /* block */)a7 subscriptionEstablished:(id /* block */)a8;
- (void)deregisterReportHandlersWithClientQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithController:(id)a0 deviceId:(unsigned long long)a1 xpcConnection:(id)a2;

@end

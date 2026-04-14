@class CHIPDeviceControllerXPCConnection;
@protocol NSCopying;

@interface CHIPDeviceOverXPC : CHIPDevice

@property (readonly, nonatomic) id<NSCopying> controller;
@property (readonly, nonatomic) unsigned long long nodeId;
@property (readonly, nonatomic) CHIPDeviceControllerXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)subscribeWithQueue:(id)a0 minInterval:(unsigned short)a1 maxInterval:(unsigned short)a2 reportHandler:(id /* block */)a3 subscriptionEstablished:(id /* block */)a4;
- (void)readAttributeWithEndpointId:(unsigned long long)a0 clusterId:(unsigned long long)a1 attributeId:(unsigned long long)a2 clientQueue:(id)a3 completion:(id /* block */)a4;
- (void)writeAttributeWithEndpointId:(unsigned long long)a0 clusterId:(unsigned long long)a1 attributeId:(unsigned long long)a2 value:(id)a3 clientQueue:(id)a4 completion:(id /* block */)a5;
- (void)invokeCommandWithEndpointId:(unsigned long long)a0 clusterId:(unsigned long long)a1 commandId:(unsigned long long)a2 commandFields:(id)a3 clientQueue:(id)a4 completion:(id /* block */)a5;
- (void)subscribeAttributeWithEndpointId:(unsigned long long)a0 clusterId:(unsigned long long)a1 attributeId:(unsigned long long)a2 minInterval:(unsigned long long)a3 maxInterval:(unsigned long long)a4 clientQueue:(id)a5 reportHandler:(id /* block */)a6 subscriptionEstablished:(id /* block */)a7;
- (void)deregisterReportHandlersWithClientQueue:(id)a0 completion:(id /* block */)a1;
- (id)initWithController:(id)a0 deviceId:(unsigned long long)a1 xpcConnection:(id)a2;

@end

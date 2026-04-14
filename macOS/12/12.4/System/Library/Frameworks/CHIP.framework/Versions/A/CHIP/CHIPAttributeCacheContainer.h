@class CHIPDeviceControllerOverXPC;

@interface CHIPAttributeCacheContainer : NSObject

@property (nonatomic) void *cppAttributeCache;
@property (nonatomic) void *cppReadClient;
@property (nonatomic) struct ContainerAttributeCacheCallback { void /* function */ **x0; id x1; } *attributeCacheCallback;
@property (nonatomic) unsigned long long deviceId;
@property (weak) CHIPDeviceControllerOverXPC *xpcDeviceController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)readAttributeWithEndpointId:(unsigned long long)a0 clusterId:(unsigned long long)a1 attributeId:(unsigned long long)a2 clientQueue:(id)a3 completion:(id /* block */)a4;
- (void)subscribeWithDeviceController:(id)a0 deviceId:(unsigned long long)a1 clientQueue:(id)a2 completion:(id /* block */)a3;

@end

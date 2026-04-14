@class MTRDeviceControllerXPCConnection;
@protocol NSCopying;

@interface MTRAttributeCacheContainer : NSObject

@property void *cppAttributeCache;
@property (nonatomic) unsigned long long deviceId;
@property (weak, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection;
@property (retain, nonatomic) id<NSCopying> xpcControllerId;
@property BOOL shouldUseXPC;

- (id)init;
- (void).cxx_destruct;
- (void)setXPCConnection:(id)a0 controllerId:(id)a1 deviceId:(unsigned long long)a2;
- (void)readAttributeWithEndpointId:(id)a0 clusterId:(id)a1 attributeId:(id)a2 clientQueue:(id)a3 completion:(id /* block */)a4;

@end

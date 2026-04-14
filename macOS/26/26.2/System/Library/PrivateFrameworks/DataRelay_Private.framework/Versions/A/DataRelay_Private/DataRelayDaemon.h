@class DRServerManager, NSObject;
@protocol OS_dispatch_queue;

@interface DataRelayDaemon : NSObject {
    NSObject<OS_dispatch_queue> *dispatchQueue;
}

@property (readonly, retain, nonatomic) DRServerManager *serverManager;

+ (id)sharedDataRelayInstance;

- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)handleXPCDisconnected:(unsigned int)a0;
- (void)informDRClientSensorDataAvailable:(id)a0 dataTypes:(unsigned long long)a1 connectionID:(unsigned int)a2 completion:(id /* block */)a3;
- (void)informDRClientSensorDataUnavailable:(id)a0 dataTypes:(unsigned long long)a1 connectionID:(unsigned int)a2 completion:(id /* block */)a3;

@end

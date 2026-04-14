@class NSObject, CBDiscovery;
@protocol OS_dispatch_queue, ULBleIdentityBridgeDelegate;

@interface ULBleIdentityBridge : NSObject

@property (retain, nonatomic) CBDiscovery *cbDiscovery;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<ULBleIdentityBridgeDelegate> delegate;

- (void)startMonitoring;
- (id)initWithDelegate:(id)a0;
- (void)stopMonitoring;
- (void).cxx_destruct;
- (void)_deviceFoundHandler:(id)a0;

@end

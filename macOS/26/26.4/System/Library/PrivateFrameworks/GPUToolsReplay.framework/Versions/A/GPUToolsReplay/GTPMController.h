@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface GTPMController : NSObject {
    NSString *_gpuFamily;
    int _gpuVendor;
    BOOL _initialized;
    BOOL _connected;
    NSString *_perfState;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (retain, nonatomic) NSXPCConnection *connectionToService;
@property (readonly, nonatomic) BOOL serviceLaunched;

+ (id)stateFromWeightedAverage:(double)a0;

- (void)tearDown;
- (void).cxx_destruct;
- (void)_initGTPM;
- (void)clearStateOccupancy;
- (double)getStateOccupancy;
- (id)initWithGPUFamily:(id)a0;
- (void)setPerfState:(id)a0;

@end

@class NSOperationQueue, NSObject;
@protocol OS_dispatch_queue;

@interface CMDeviceImpactManager : NSObject {
    struct unique_ptr<CLConnectionClient, std::default_delete<CLConnectionClient>> { struct CLConnectionClient *__ptr_; } _locationdConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _handler;
    NSOperationQueue *_handlerQueue;
}

@property (readonly, nonatomic, getter=isDeviceImpactAvailable) BOOL deviceImpactAvailable;

- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearDeviceImpactCacheWithCompletion:(id /* block */)a0;
- (void)queryDeviceImpactsWithCompletion:(id /* block */)a0;
- (void)simulateHighAccelDeviceImpactWithTimeOffset:(double)a0 peakAcceleration:(double)a1 completion:(id /* block */)a2;
- (void)startDeviceImpactUpdatesToQueue:(id)a0 withHandler:(id /* block */)a1;
- (void)stopDeviceImpactUpdates;

@end

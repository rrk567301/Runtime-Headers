@class VEFrameProcessor, MTLSharedEventListener, NSObject, NSMutableArray;
@protocol MTLDevice, VTFrameProcessorConfiguration, VTFrameProcessorImplementationPrivate, OS_dispatch_queue;

@interface VTFrameProcessor : NSObject {
    VEFrameProcessor *_veFrameProcessor;
    long long _processorType;
    id<VTFrameProcessorImplementationPrivate> _processor;
    id<VTFrameProcessorConfiguration> _configuration;
    NSObject<OS_dispatch_queue> *_processFrameQueue;
    id<MTLDevice> _device;
    MTLSharedEventListener *_sharedEventListener;
    NSMutableArray *_sharedEventList;
    BOOL _sharedEventListTearingDown;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sharedEventListLock;
}

- (void)dealloc;
- (id)init;
- (void)endSession;
- (BOOL)createSharedEventListener;
- (void)destroySharedEventListener;
- (void)internalEndSession;
- (void)processWithCommandBuffer:(id)a0 parameters:(id)a1;
- (void)processWithParameters:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)processWithParameters:(id)a0 error:(id *)a1;
- (void)processWithParameters:(id)a0 frameOutputHandler:(id /* block */)a1;
- (BOOL)startSessionWithConfiguration:(id)a0 error:(id *)a1;

@end

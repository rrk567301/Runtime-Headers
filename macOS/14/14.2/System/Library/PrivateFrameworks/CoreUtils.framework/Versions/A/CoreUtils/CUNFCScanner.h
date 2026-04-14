@class NSObject;
@protocol OS_dispatch_queue;

@interface CUNFCScanner : NSObject {
    BOOL _invalidateCalled;
    NSObject<OS_dispatch_queue> *_nfcDispatchQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL pauseWhenFound;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ foundDeviceHandler;
@property (copy, nonatomic) id /* block */ lostDeviceHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)resume;
- (void)activate;
- (void)pause;
- (void)_invalidateWithError:(id)a0;
- (void)_pause;

@end

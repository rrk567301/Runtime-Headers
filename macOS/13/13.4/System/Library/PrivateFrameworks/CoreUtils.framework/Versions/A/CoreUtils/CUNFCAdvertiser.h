@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface CUNFCAdvertiser : NSObject {
    BOOL _invalidateCalled;
}

@property (copy, nonatomic) NSURL *advertisementURI;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ tagStateChangedHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_invalidateWithError:(id)a0;

@end

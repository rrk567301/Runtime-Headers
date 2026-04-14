@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : FBSServiceFacilityClient {
    id<FBSOrientationObserverClientDelegate> _delegate;
    unsigned int _interest;
}

- (void)invalidate;
- (void).cxx_destruct;
- (void)handleMessage:(id)a0 withType:(long long)a1;
- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 calloutQueue:(id)a1;
- (void)registerOrientationInterest:(unsigned int)a0;
- (void)_getActiveInterfaceOrientationSynchronously:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)configureConnectMessage:(id)a0;

@end

@protocol CDPDCircleProxy;

@interface CDPDKeychainSync : NSObject {
    id<CDPDCircleProxy> _circleProxy;
}

+ (id)keyChainSync;
+ (id)keyChainSyncWithProxy:(id)a0;
+ (id)_defaultUserVisibleViewSet;

- (void).cxx_destruct;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;
- (BOOL)isUserVisibleKeychainSyncEnabled;
- (BOOL)_isThisDeviceInCircle;
- (void)_processAuthFailure:(id)a0 completion:(id /* block */)a1;
- (void)_preflightCircleStatusWithCompletion:(id /* block */)a0;
- (BOOL)_setKeychainSyncState:(BOOL)a0;
- (void)removeNonViewAwarePeersFromCircleWithCompletion:(id /* block */)a0;
- (BOOL)matchKeychainViewState:(BOOL)a0;
- (BOOL)synchronizeKeychainViewSetWithOtherPeers:(id *)a0;

@end

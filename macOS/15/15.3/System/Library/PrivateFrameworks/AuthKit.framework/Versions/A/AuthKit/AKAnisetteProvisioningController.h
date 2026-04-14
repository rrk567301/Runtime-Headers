@class NSXPCListenerEndpoint, AKDevice, NSXPCConnection;
@protocol AKAnisetteServiceProtocol;

@interface AKAnisetteProvisioningController : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
    NSXPCConnection *_anisetteServiceConnection;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
}

@property (retain, nonatomic) AKDevice *targetDevice;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_anisetteServiceConnection;
- (void)_attestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (id)_attestationDataForRequest:(id)a0 error:(id *)a1;
- (id)_fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 error:(id *)a1;
- (void)_fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_tearDownConnection;
- (void)anisetteDataForURLRequest:(id)a0 completion:(id /* block */)a1;
- (id)anisetteDataForURLRequest:(id)a0 error:(id *)a1;
- (void)anisetteDataWithCompletion:(id /* block */)a0;
- (id)anisetteDataWithError:(id *)a0;
- (void)attestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (id)attestationDataForRequest:(id)a0 error:(id *)a1;
- (void)eraseWithCompletion:(id /* block */)a0;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 error:(id *)a1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)fetchPeerAttestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initForDevice:(id)a0 provider:(id)a1;
- (id)initWithDaemonXPCEndpoint:(id)a0;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)postAttestationAnalytics:(id)a0 completion:(id /* block */)a1;
- (void)provisionWithCompletion:(id /* block */)a0;
- (void)resetDeviceIdentityWithCompletion:(id /* block */)a0;
- (void)setTimeAdjustmentWithServerTime:(id)a0 completion:(id /* block */)a1;
- (void)syncWithSIMData:(id)a0 completion:(id /* block */)a1;

@end

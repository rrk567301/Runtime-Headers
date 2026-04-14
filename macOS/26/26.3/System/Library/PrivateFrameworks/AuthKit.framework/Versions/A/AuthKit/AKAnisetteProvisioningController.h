@class AKDevice, AKClientConnectionLifecycleManager;
@protocol AKAnisetteServiceProtocol;

@interface AKAnisetteProvisioningController : NSObject

@property (retain, nonatomic) AKDevice *targetDevice;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;
@property (retain, nonatomic) AKClientConnectionLifecycleManager *connectionManager;
@property unsigned long long timeSetOperationResult;

- (void)fetchPeerAttestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initForDevice:(id)a0 provider:(id)a1;
- (void)postAttestationAnalytics:(id)a0 completion:(id /* block */)a1;
- (void)anisetteDataWithCompletion:(id /* block */)a0;
- (id)_anisetteServiceConnection;
- (void)provisionWithCompletion:(id /* block */)a0;
- (void)_setTimeAdjustmentWithServerTime:(id)a0 completion:(id /* block */)a1;
- (void)_attestationDataForRequestData:(id)a0 completion:(id /* block */)a1;
- (id)anisetteDataForURLRequest:(id)a0 error:(id *)a1;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (id)init;
- (id)initWithConnectionConfiguration:(id)a0 device:(id)a1 provider:(id)a2;
- (void)anisetteDataForURLRequest:(id)a0 completion:(id /* block */)a1;
- (id)_attestationDataForRequestData:(id)a0 error:(id *)a1;
- (void)attestationDataForRequestData:(id)a0 completion:(id /* block */)a1;
- (void)resetDeviceIdentityWithCompletion:(id /* block */)a0;
- (void)syncWithSIMData:(id)a0 completion:(id /* block */)a1;
- (id)attestationDataForRequestData:(id)a0 error:(id *)a1;
- (void)eraseWithCompletion:(id /* block */)a0;
- (void)refreshBAADeviceTokenWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleAttestationResponseWithResponseData:(id)a0 completion:(id /* block */)a1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (id)anisetteDataWithError:(id *)a0;
- (id)_fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 error:(id *)a1;
- (void)_tearDownConnection;
- (void)attestationDataForRequest:(id)a0 completion:(id /* block */)a1;
- (id)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 error:(id *)a1;
- (void)setTimeAdjustmentWithServerTime:(id)a0 completion:(id /* block */)a1;
- (void)_fetchAnisetteDataAndProvisionIfNecessary:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)shouldAllowReprovisionForHostName:(id)a0 completion:(id /* block */)a1;

@end

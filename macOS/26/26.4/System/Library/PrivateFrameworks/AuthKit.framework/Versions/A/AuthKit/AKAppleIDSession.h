@class NSArray, AKDevice, NSString, AKAnisetteProvisioningController, AKAnisetteData, NSLock;
@protocol AKAnisetteServiceProtocol;

@interface AKAppleIDSession : NSObject <NSURLSessionAppleIDContext> {
    NSString *_serviceID;
    AKAnisetteProvisioningController *_nativeAnisetteController;
    AKAnisetteProvisioningController *_pairedDeviceAnisetteController;
    AKAnisetteData *_proxiedAnisetteData;
    NSLock *_anisetteControllerLock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AKDevice *pairedDevice;
@property (retain, nonatomic) id<AKAnisetteServiceProtocol> anisetteDataProvider;
@property (copy, nonatomic) NSArray *additionalHeadersForSigning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_canHandleAnisetteURLResponse:(id)a0;
- (void)_handleAnisetteURLResponse:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void)handleResponse:(id)a0 forRequest:(id)a1 shouldRetry:(BOOL *)a2;
- (void)appleIDHeadersWithCompletion:(id /* block */)a0;
- (void)appleIDHeadersForRequest:(id)a0 completion:(id /* block */)a1;
- (BOOL)shouldDenyRequestForURL:(id)a0 task:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 getAppleIDRequestOrHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appleIDHeadersForRequest:(id)a0;
- (void)_generateAppleIDHeadersForSessionTask:(id)a0 withCompletion:(id /* block */)a1;
- (void)_handleURLSwitchingResponse:(id)a0 forRequest:(id)a1 withCompletion:(id /* block */)a2;
- (id)_generateAppleIDHeadersForRequest:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void)_reportOnRequest:(id)a0 response:(id)a1 attestationData:(id)a2;
- (id)_nativeAnisetteController;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_resetDeviceIdentityWithCompletion:(id /* block */)a0;
- (void)_addFailureInjectionHeadersIfNeeded:(id)a0 forRequestURL:(id)a1;
- (id)_pairedDeviceAnisetteController;
- (id)init;
- (void)_handleAnisetteReprovisionWithRequestURL:(id)a0 anisetteController:(id)a1 completion:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (id)relevantHTTPStatusCodes;
- (void)URLSession:(id)a0 task:(id)a1 getAppleIDHeadersForResponse:(id)a2 completionHandler:(id /* block */)a3;
- (id)_genericAppleIDHeadersDictionaryForRequest:(id)a0;
- (void)appleIDHeadersUsingAnisetteWithCompletion:(id /* block */)a0;

@end

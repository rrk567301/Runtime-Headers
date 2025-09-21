@class NSString, AKAnisetteData, NSData, NSError, NSURLRequest, AKAttestationData;

@interface ProximityAppleIDSetup.PASAnisetteDataRequester : SwiftNativeNSObject <AKAnisetteServiceProtocol> {
    void /* unknown type, empty encoding */ messageSessionProvider;
}

- (id)init;
- (void)eraseAnisetteWithCompletion:(void (^)(char, NSError *))a0;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(char)a0 withCompletion:(void (^)(AKAnisetteData *, NSError *))a1;
- (void)fetchPeerAttestationDataForRequest:(NSURLRequest *)a0 completion:(void (^)(AKAttestationData *, NSError *))a1;
- (void)legacyAnisetteDataForDSID:(NSString *)a0 withCompletion:(void (^)(AKAnisetteData *, NSError *))a1;
- (void)provisionAnisetteWithCompletion:(void (^)(char, NSError *))a0;
- (void)syncAnisetteWithSIMData:(NSData *)a0 completion:(void (^)(char, NSError *))a1;

@end

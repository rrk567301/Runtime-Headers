@class NSData, NSString, AKAnisetteData;

@interface SASProximityAnisetteRequestAction : SASProximityAction <AKAnisetteServiceProtocol>

@property long long request;
@property (retain) NSData *sim;
@property char shouldProvision;
@property (retain) NSString *dsid;
@property (retain) AKAnisetteData *anisetteData;
@property char success;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (void).cxx_destruct;
- (void)eraseAnisetteWithCompletion:(id /* block */)a0;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(char)a0 withCompletion:(id /* block */)a1;
- (void)legacyAnisetteDataForDSID:(id)a0 withCompletion:(id /* block */)a1;
- (void)provisionAnisetteWithCompletion:(id /* block */)a0;
- (void)syncAnisetteWithSIMData:(id)a0 completion:(id /* block */)a1;
- (char)hasResponse;
- (id)requestPayload;
- (id)responsePayload;
- (void)setResponseFromData:(id)a0;

@end

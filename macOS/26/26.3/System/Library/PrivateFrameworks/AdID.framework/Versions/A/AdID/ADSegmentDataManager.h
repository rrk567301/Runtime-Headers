@class NSNumber;

@interface ADSegmentDataManager : ADSingleton

@property (copy, nonatomic) NSNumber *pendingJingleRequestToken;
@property (nonatomic) BOOL segmentUpdateInProgress;
@property (readonly, nonatomic) BOOL segmentRetrievalInProgress;

+ (id)sharedInstance;

- (void)sendSegmentDataToAdPlatforms:(id)a0 completionHandler:(id /* block */)a1;
- (void)populateAccountTypeFields:(id)a0;
- (BOOL)verifyGenderInSegmentData:(id)a0;
- (void).cxx_destruct;
- (void)retrieveSegmentDataIgnoringTimestamps:(id)a0 forceSegments:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)retrieveSegmentData:(id)a0 forceSegments:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)handleJingleSegmentResponse:(id)a0 activeRecord:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isEligibleForSensitiveContent:(long long)a0;
- (void)handleSuccessfulJingleSegmentResponse:(id)a0 dsidRecord:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldSendSegmentDataToAdPlatforms:(id)a0;
- (id)_ageDistributionOverrides;
- (id)parseBirthYearFromSegmentData:(id)a0;
- (id)checkTokenAndDSID:(id)a0;
- (BOOL)isSegmentReductionEnabled;
- (void)retrieveSegmentData:(id)a0 forceSegments:(BOOL)a1 ignoreTimestamps:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)handleSegmentUpdateResponse:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)shouldSendSegmentRequest:(id)a0 ignoreTimestamps:(BOOL)a1;
- (id)noiseAppliedBirthYearFromActual:(id)a0;
- (id)parseISO3166CodeFromSegmentData:(id)a0;

@end

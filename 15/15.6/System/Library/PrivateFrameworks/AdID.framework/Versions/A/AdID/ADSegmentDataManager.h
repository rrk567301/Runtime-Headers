@class NSNumber;

@interface ADSegmentDataManager : ADSingleton

@property (copy, nonatomic) NSNumber *pendingJingleRequestToken;
@property (nonatomic) char segmentUpdateInProgress;
@property (readonly, nonatomic) char segmentRetrievalInProgress;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_ageDistributionOverrides;
- (id)checkTokenAndDSID:(id)a0;
- (void)handleJingleSegmentResponse:(id)a0 activeRecord:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleSegmentUpdateResponse:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleSuccessfulJingleSegmentResponse:(id)a0 dsidRecord:(id)a1 completionHandler:(id /* block */)a2;
- (char)isEligibleForSensitiveContent:(long long)a0;
- (char)isSegmentReductionEnabled;
- (id)noiseAppliedBirthYearFromActual:(id)a0;
- (id)parseBirthYearFromSegmentData:(id)a0;
- (void)populateAccountTypeFields:(id)a0;
- (void)retrieveSegmentData:(id)a0 forceSegments:(char)a1 completionHandler:(id /* block */)a2;
- (void)retrieveSegmentData:(id)a0 forceSegments:(char)a1 ignoreTimestamps:(char)a2 completionHandler:(id /* block */)a3;
- (void)retrieveSegmentDataIgnoringTimestamps:(id)a0 forceSegments:(char)a1 completionHandler:(id /* block */)a2;
- (void)sendSegmentDataToAdPlatforms:(id)a0 completionHandler:(id /* block */)a1;
- (char)shouldSendSegmentDataToAdPlatforms:(id)a0;
- (char)shouldSendSegmentRequest:(id)a0 ignoreTimestamps:(char)a1;
- (char)verifyGenderInSegmentData:(id)a0;

@end

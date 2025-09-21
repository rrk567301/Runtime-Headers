@interface CKDServerTrustCache : NSObject

+ (void)setFetchAttempt;
+ (id)validatedTrusts;
+ (void)setValidatedTrusts:(id)a0;
+ (char)shouldRefetchTrusts;

@end

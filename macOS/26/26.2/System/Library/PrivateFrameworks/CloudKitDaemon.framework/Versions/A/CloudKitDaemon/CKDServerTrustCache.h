@interface CKDServerTrustCache : NSObject

+ (id)validatedTrusts;
+ (void)setFetchAttempt;
+ (void)setValidatedTrusts:(id)a0;
+ (BOOL)shouldRefetchTrusts;

@end

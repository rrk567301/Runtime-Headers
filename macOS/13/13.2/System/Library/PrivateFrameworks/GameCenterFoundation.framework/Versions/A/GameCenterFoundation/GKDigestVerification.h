@interface GKDigestVerification : NSObject

+ (id)computeVerificationHashForDigest:(id)a0;
+ (BOOL)digest:(id)a0 matchesHash:(id)a1;
+ (id)digestForSubmitScore:(id)a0 forBundleID:(id)a1 shouldScreen:(BOOL)a2 eligibleChallenges:(id)a3;
+ (id)digestForSubmitAchievement:(id)a0 forBundleID:(id)a1 shouldScreen:(BOOL)a2 eligibleChallenges:(id)a3;
+ (id)computeHashForDigest:(id)a0 withSugar:(id)a1;
+ (BOOL)verifyHash:(id)a0 forDigest:(id)a1 withSugar:(id)a2;

@end

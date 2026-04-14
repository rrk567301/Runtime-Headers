@interface AMSAgeVerificationPureFunctions : NSObject

+ (id)_isVerificationNeededForExpiration:(id)a0 ageVerificationEnabled:(BOOL)a1 at:(id)a2 futureMoment:(id)a3;
+ (BOOL)_isAgeVerificationNeededForExpiration:(id)a0 at:(id)a1;
+ (BOOL)_isTimestamp:(id)a0 validAsOf:(id)a1;
+ (id)_momentOfExpiryFrom:(id)a0;

@end

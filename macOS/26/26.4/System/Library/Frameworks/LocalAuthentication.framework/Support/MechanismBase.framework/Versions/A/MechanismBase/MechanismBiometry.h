@class NSNumber, NSArray;

@interface MechanismBiometry : MechanismACM

@property (retain, nonatomic) NSNumber *userId;
@property (nonatomic) BOOL biolockout;
@property (nonatomic) BOOL hasFallback;
@property (nonatomic) BOOL hasUI;
@property (retain, nonatomic) NSNumber *failureLimit;
@property (readonly, nonatomic) BOOL failureLimitWasExceeded;
@property (nonatomic) unsigned long long failures;
@property (readonly, nonatomic) BOOL isBiometryRequiredForPolicy;
@property (readonly, nonatomic) BOOL isFallbackVisible;
@property (retain, nonatomic) NSArray *identityUUIDs;
@property (readonly, nonatomic) BOOL willTryToRecover;

- (void).cxx_destruct;
- (BOOL)canRecoverFromAvailabilityError:(id)a0 request:(id)a1;
- (BOOL)checkLockoutState:(long long)a0 isEffectiveLockoutForMatchWithPurpose:(long long)a1;
- (id)failuresInfoDictionaryWithError:(id)a0;
- (id)failuresInfoDictionaryWithError:(id)a0 unboundMatch:(BOOL)a1;
- (void)handleBiometricStatusEventWithValue:(id)a0 completion:(id /* block */)a1;
- (id)initWithEventIdentifier:(long long)a0 remoteViewController:(long long)a1 acmContextRecord:(id)a2 request:(id)a3 evaluationMode:(long long)a4 userId:(id)a5;

@end

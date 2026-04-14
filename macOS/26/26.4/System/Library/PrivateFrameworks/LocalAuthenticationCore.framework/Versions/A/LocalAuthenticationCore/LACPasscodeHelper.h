@class _TtC23LocalAuthenticationCore18LACPasscodeMonitor, LACPasscodeUserHelper, _TtC23LocalAuthenticationCore21LACPasscodeSuccessAge, LACPasscodeMKBHelper, _TtC23LocalAuthenticationCore19LACPasscodeVerifier;
@protocol LACPasscodeRateLimiting;

@interface LACPasscodeHelper : NSObject

@property (nonatomic, readonly) _TtC23LocalAuthenticationCore18LACPasscodeMonitor *monitor;
@property (nonatomic, readonly) LACPasscodeUserHelper *userHelper;
@property (nonatomic, readonly) _TtC23LocalAuthenticationCore21LACPasscodeSuccessAge *passcodeSuccessAgeController;
@property (nonatomic, readonly) id<LACPasscodeRateLimiting> rateLimiting;
@property (nonatomic, readonly) LACPasscodeMKBHelper *mkbHelper;
@property (nonatomic, readonly) _TtC23LocalAuthenticationCore19LACPasscodeVerifier *verifier;
@property (nonatomic, readonly) double passcodeSuccessAge;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (id)init;
- (void)removeObserver:(id)a0;
- (BOOL)accountBlockedForUserID:(id)a0;
- (double)backoffTimeIntervalForUserID:(id)a0;
- (id)deviceOwners;
- (BOOL)isPasscodeSetForUser:(unsigned int)a0 error:(id *)a1;
- (void)updatePasscodeSuccessAgeWithUptime:(id)a0;
- (long long)verifyPasscode:(id)a0;
- (id)initWithVerifier:(id)a0 passcodeSuccessAge:(id)a1 rateLimiting:(id)a2 mkbHelper:(id)a3 userHelper:(id)a4 keyBagProvider:(id)a5;
- (id)nonHiddenDeviceOwners;
- (BOOL)verifyFvPassword:(id)a0 acmContext:(id)a1 kek:(id)a2 vek:(id)a3 options:(long long)a4 error:(id *)a5;

@end

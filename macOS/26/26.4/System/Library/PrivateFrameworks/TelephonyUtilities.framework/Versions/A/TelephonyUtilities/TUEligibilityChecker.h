@interface TUEligibilityChecker : NSObject

+ (BOOL)isCallRecordingEligible;
+ (BOOL)isDomainEligible:(unsigned long long)a0;
+ (BOOL)isSilenceUnknownCallersByDefaultEnabled;

@end

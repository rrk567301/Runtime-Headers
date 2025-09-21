@interface PKTrustAdditions : NSObject

+ (char)evaluateDeveloperIDTrust:(struct __SecTrust { } *)a0 settingResult:(unsigned int *)a1;
+ (char)evaluateFirenzeTrust:(struct __SecTrust { } *)a0 settingResult:(unsigned int *)a1 forDeveloper:(char)a2 isDevelopmentSigned:(char *)a3;
+ (char)evaluateShotoTrust:(struct __SecTrust { } *)a0 settingResult:(unsigned int *)a1 isDevelopmentSigned:(char *)a2;

@end

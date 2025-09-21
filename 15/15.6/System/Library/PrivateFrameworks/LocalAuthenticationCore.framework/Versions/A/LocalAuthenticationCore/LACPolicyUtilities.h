@interface LACPolicyUtilities : NSObject

+ (char)isApplePayPolicy:(long long)a0;
+ (char)isPolicyAcceptingEmptyPassword:(long long)a0;
+ (char)isApplePayPolicy:(long long)a0 inApp:(char)a1;
+ (char)isBiometricOnlyPolicy:(long long)a0;

@end

@interface LACPolicyUtilities : NSObject

+ (BOOL)isApplePayPolicy:(long long)a0;
+ (BOOL)isPolicyAcceptingEmptyPassword:(long long)a0;
+ (BOOL)isApplePayPolicy:(long long)a0 inApp:(BOOL)a1;
+ (BOOL)isBiometricOnlyPolicy:(long long)a0;
+ (BOOL)isDTOPolicy:(long long)a0 options:(id)a1;

@end

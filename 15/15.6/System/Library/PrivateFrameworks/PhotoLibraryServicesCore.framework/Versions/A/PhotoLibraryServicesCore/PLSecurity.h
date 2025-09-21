@interface PLSecurity : NSObject

+ (char)isEntitledForPhotoKit;
+ (id)connection:(id)a0 grantedEntitlements:(id)a1;
+ (char)auditToken:(struct { unsigned int x0[8]; })a0 hasEntitlement:(id)a1;
+ (char)connection:(id)a0 hasEntitlement:(id)a1;
+ (char)containsPhotoKitEntitlement:(id)a0;
+ (char)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(struct { unsigned int x0[8]; })a0;
+ (char)isAppleSigned;
+ (id)connection:(id)a0 valueForEntitlement:(id)a1;
+ (char)_isAppleSignedCodeRef:(void *)a0 validityChecker:(id /* block */)a1;
+ (id)_secTask:(struct __SecTask { } *)a0 grantedEntitlements:(id)a1;
+ (id)connection:(id)a0 valuesForEntitlements:(id)a1;
+ (char)connectionIsEntitledForPhotoKit:(id)a0;
+ (char)hasXPCStoreEntitlementOptInForToken:(struct { unsigned int x0[8]; })a0;
+ (char)isAppleSignedAtURL:(id)a0;
+ (char)secTask:(struct __SecTask { } *)a0 hasEntitlement:(id)a1;

@end

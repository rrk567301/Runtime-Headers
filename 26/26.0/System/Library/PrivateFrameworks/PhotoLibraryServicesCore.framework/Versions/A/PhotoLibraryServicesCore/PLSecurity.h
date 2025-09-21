@interface PLSecurity : NSObject

+ (BOOL)isAppleSigned;
+ (BOOL)hasXPCStoreEntitlementOptInForToken:(struct { unsigned int x0[8]; })a0;
+ (id)connection:(id)a0 grantedEntitlements:(id)a1;
+ (BOOL)isAppleSignedAtURL:(id)a0;
+ (id)connection:(id)a0 valuesForEntitlements:(id)a1;
+ (BOOL)connectionIsEntitledForPhotoKit:(id)a0;
+ (BOOL)connection:(id)a0 hasEntitlement:(id)a1;
+ (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 hasEntitlement:(id)a1;
+ (BOOL)secTask:(struct __SecTask { } *)a0 hasEntitlement:(id)a1;
+ (BOOL)containsPhotoKitEntitlement:(id)a0;
+ (BOOL)isEntitledForPhotoKit;
+ (BOOL)clientIsAllowedToFetchCollectionShares;
+ (BOOL)_isAppleSignedCodeRef:(void *)a0 validityChecker:(id /* block */)a1;
+ (id)_secTask:(struct __SecTask { } *)a0 grantedEntitlements:(id)a1;
+ (BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(struct { unsigned int x0[8]; })a0;
+ (id)connection:(id)a0 valueForEntitlement:(id)a1;

@end

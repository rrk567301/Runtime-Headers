@interface PLSecurity : NSObject

+ (BOOL)isAppleSignedAtURL:(id)a0;
+ (id)connection:(id)a0 valuesForEntitlements:(id)a1;
+ (BOOL)connectionIsEntitledForPhotoKit:(id)a0;
+ (BOOL)containsPhotoKitEntitlement:(id)a0;
+ (id)_secTask:(struct __SecTask { } *)a0 grantedEntitlements:(id)a1;
+ (id)connection:(id)a0 valueForEntitlement:(id)a1;
+ (BOOL)isAppleSigned;
+ (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 hasEntitlement:(id)a1;
+ (id)connection:(id)a0 grantedEntitlements:(id)a1;
+ (BOOL)connection:(id)a0 hasEntitlement:(id)a1;
+ (BOOL)isEntitledForPhotoKit;
+ (BOOL)isEntitledForPhotoKitOrPrivatePhotosTCCForToken:(struct { unsigned int x0[8]; })a0;
+ (BOOL)clientIsAllowedToFetchCollectionShares;
+ (BOOL)secTask:(struct __SecTask { } *)a0 hasEntitlement:(id)a1;
+ (BOOL)_isAppleSignedCodeRef:(void *)a0 validityChecker:(id /* block */)a1;
+ (BOOL)hasXPCStoreEntitlementOptInForToken:(struct { unsigned int x0[8]; })a0;

@end

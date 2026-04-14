@interface IntermediateKey : NSObject

- (id)init;
- (void).cxx_destruct;
- (id)addAuthenticatorWithKeyWithUserUuid:(id)a0 authenticatedBy:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 friendlyName:(id)a2 error:(id *)a3 forNewKey:(id /* block */)a4;
- (id)addAuthenticatorWithPasswordWithUserUuid:(id)a0 identifiedBy:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 authenticatedBy:(id)a2 friendlyName:(id)a3 error:(id *)a4;
- (BOOL)clearAccessTokenKeyCacheAndReturnError:(id *)a0;
- (BOOL)createIntermediateKeyWithUserUuid:(id)a0 contextWithPassword:(id)a1 error:(id *)a2;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)getAccessTokenKeyWithUserUuid:(id)a0 hashString:(id)a1 error:(id *)a2;
- (id)listAccessTokenKeysWithUserUuid:(id)a0 error:(id *)a1;
- (id)listAuthenticatorsWithUserUuid:(id)a0 error:(id *)a1;
- (id)listIntermediateKeysAndReturnError:(id *)a0;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)registerAccessTokenKeyWithUserUuid:(id)a0 authenticatedBy:(id)a1 identifiedBy:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2 error:(id *)a3;
- (BOOL)registerLegacyKeybagUnlockWithUserUuid:(id)a0 contextWithPassword:(id)a1 error:(id *)a2;
- (BOOL)registerOTIKeybagUnlockWithUserUuid:(id)a0 contextWithPassword:(id)a1 error:(id *)a2;
- (BOOL)removeAuthenticatorWithUserUuid:(id)a0 identifiedBy:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
- (BOOL)removeAuthenticatorWithUserUuid:(id)a0 pubKeyHash:(id)a1 error:(id *)a2;
- (BOOL)removeIntermediateKeyWithUserUuidWithUserUuid:(id)a0 error:(id *)a1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)unlockAccessTokenKeyWithUserUuid:(id)a0 authenticatedBy:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
- (BOOL)unlockLegacyKeybagWithUserUuid:(id)a0 authenticatedBy:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
- (BOOL)unlockOTIKeybagWithUserUuid:(id)a0 authenticatedBy:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1 error:(id *)a2;
- (BOOL)unregisterAccessTokenKeyWithUserUuid:(id)a0 hashString:(id)a1 error:(id *)a2;

@end

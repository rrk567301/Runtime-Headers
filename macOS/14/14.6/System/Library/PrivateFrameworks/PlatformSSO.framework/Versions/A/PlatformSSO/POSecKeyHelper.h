@interface POSecKeyHelper : NSObject

+ (id)dataForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (struct __SecCertificate { } *)certificateForData:(id)a0;
+ (BOOL)checkIfBiometricConstraintsForSigning:(struct __SecAccessControl { } *)a0;
+ (BOOL)checkIfBiometricConstraintsForSigningForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createSEPKeyForKeyType:(long long)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)createSEPKeyForKeyType:(long long)a0 userPresence:(BOOL)a1 currentSet:(BOOL)a2;
+ (id)dataForCertificate:(struct __SecCertificate { } *)a0;
+ (id)dataForEphemeralKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)ephemeralKeyForData:(id)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)ephemeralPublicKeyForData:(id)a0;
+ (BOOL)evaluateTrustForCertificates:(id)a0 rootCertificates:(id)a1;
+ (struct __SecIdentity { } *)identityForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0 andCertificate:(struct __SecCertificate { } *)a1;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)keyForData:(id)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)keyForData:(id)a0 context:(id)a1;
+ (id)printKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)systemKeyForData:(id)a0;
+ (BOOL)verifyKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;

@end

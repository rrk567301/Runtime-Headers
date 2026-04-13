@interface PKBundleCodeSigning : NSObject

+ (BOOL)verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 withRequirement:(struct __SecRequirement { } *)a1 recursively:(BOOL)a2 errors:(id *)a3 cancelUsingTest:(id /* block */)a4;
+ (BOOL)_verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 withRequirement:(struct __SecRequirement { } *)a1 recursively:(BOOL)a2 addingErrorsTo:(id)a3 cancelUsingTest:(id /* block */)a4;
+ (BOOL)_verifyCodeSignatureOnURL:(id)a0 requirements:(struct __SecRequirement { } *)a1 error:(id *)a2;
+ (BOOL)_verifyCodeSignaturesUnderDirectory:(id)a0 requirements:(struct __SecRequirement { } *)a1 currentBundleResourcePath:(id)a2 addingErrorsTo:(id)a3 cancelUsingTest:(id /* block */)a4;
+ (BOOL)verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 withRequirement:(struct __SecRequirement { } *)a1 recursively:(BOOL)a2 errors:(id *)a3;

@end

@interface PKBundleCodeSigning : NSObject

+ (char)_verifyCodeSignatureOnURL:(id)a0 requirements:(struct __SecRequirement { } *)a1 error:(id *)a2;
+ (char)_verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 requirement:(struct __SecRequirement { } *)a1 rootBundle:(char)a2 recursively:(char)a3 addingErrorsTo:(id)a4 cancelUsingTest:(id /* block */)a5;
+ (char)_verifyCodeSignaturesUnderDirectory:(id)a0 requirements:(struct __SecRequirement { } *)a1 exclusionPaths:(id)a2 addingErrorsTo:(id)a3 cancelUsingTest:(id /* block */)a4;
+ (char)verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 withRequirement:(struct __SecRequirement { } *)a1 recursively:(char)a2 errors:(id *)a3;
+ (char)verifyCodeSignaturesOfBundle:(struct __CFBundle { } *)a0 withRequirement:(struct __SecRequirement { } *)a1 recursively:(char)a2 errors:(id *)a3 cancelUsingTest:(id /* block */)a4;

@end

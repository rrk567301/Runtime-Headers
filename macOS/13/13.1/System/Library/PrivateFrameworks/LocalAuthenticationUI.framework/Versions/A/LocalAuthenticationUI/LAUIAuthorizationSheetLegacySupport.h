@interface LAUIAuthorizationSheetLegacySupport : NSObject

+ (BOOL)_isEnvironmentItemBanned:(struct { char *x0; unsigned long long x1; void *x2; unsigned int x3; } *)a0;
+ (id)prepareAuthorizationForRights:(id)a0 flags:(id)a1 environment:(id)a2;
+ (void)performAutorizationForRights:(id)a0 flags:(id)a1 environment:(id)a2 authorization:(struct AuthorizationOpaqueRef { } *)a3 request:(id)a4 completion:(id /* block */)a5;
+ (void)_performAutorizationForRights:(struct { unsigned int x0; struct *x1; } *)a0 flags:(unsigned int)a1 environment:(struct { unsigned int x0; struct *x1; } *)a2 authorization:(struct AuthorizationOpaqueRef { } *)a3 completion:(id /* block */)a4;
+ (void)_performAutorizationForRights:(struct { unsigned int x0; struct *x1; } *)a0 flags:(unsigned int)a1 environment:(struct { unsigned int x0; struct *x1; } *)a2 authorization:(struct AuthorizationOpaqueRef { } *)a3 request:(id)a4 completion:(id /* block */)a5;

@end

@interface TransparencyError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 description:(id)a2;
+ (id)errorWithError:(id)a0 underlyingError:(id)a1;
+ (id)diagnosticError:(id)a0;
+ (id)diagnosticError:(id)a0 depth:(unsigned long long)a1;
+ (id)diagnosticUserInfo:(id)a0 depth:(unsigned long long)a1;
+ (id)diagnosticUserInfoValue:(id)a0 depth:(unsigned long long)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 description:(id)a4;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 description:(id)a4 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a5;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 userinfo:(id)a4 description:(id)a5;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 userinfo:(id)a4 description:(id)a5 arguments:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a6;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 underlyingError:(id)a2 description:(id)a3;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 underlyingError:(id)a2 userinfo:(id)a3 description:(id)a4;
+ (char)hasUnknownSPKIHashError:(id)a0;
+ (id)truncateUnderlyingErrorDepth:(id)a0 maxDepth:(unsigned long long)a1;
+ (id)unimplementedError:(id)a0;

@end

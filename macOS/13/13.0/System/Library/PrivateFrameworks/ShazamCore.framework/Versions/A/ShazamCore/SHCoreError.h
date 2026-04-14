@interface SHCoreError : NSObject

+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (BOOL)annotateError:(id *)a0 withError:(id)a1;
+ (id)normalizedError:(id)a0;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 keyOverrides:(id)a2;
+ (id)messageForCode:(long long)a0;
+ (BOOL)annotateError:(id *)a0 code:(long long)a1 underlyingError:(id)a2 keyOverrides:(id)a3;
+ (id)normalizedUserInfo:(id)a0;

@end

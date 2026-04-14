@class NSDictionary, NSData, TKClientTokenObject;

@interface SecCTKKey : NSObject <NSCopying>

@property (retain, nonatomic) TKClientTokenObject *tokenObject;
@property (readonly, nonatomic) NSDictionary *keychainAttributes;
@property (retain, nonatomic) NSDictionary *sessionParameters;
@property (readonly, nonatomic) long long algorithmID;
@property (readonly, nonatomic) NSData *tokenOID;
@property (nonatomic) BOOL isRegisteredSmartcard;
@property (nonatomic) BOOL wasAuthenticationContextProvidedBySecCaller;

+ (id)fromKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;

- (BOOL)ensureTokenObject:(id *)a0;
- (BOOL)shouldRetryOperationForRegisteredSmartcard:(id)a0;
- (id)initFromKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAttributes:(id)a0 error:(id *)a1;
- (id)ensureTokenObjectForBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

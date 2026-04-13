@class TKClientToken, LAContext, NSDictionary;

@interface TKSEPKey : NSObject

@property (class, nonatomic) BOOL runsInSystemSession;
@property (class, retain, nonatomic) TKClientToken *clientToken;
@property (class, readonly, nonatomic) BOOL hasSEP;
@property (class, readonly, nonatomic) BOOL isDaytona;
@property (class, readonly, nonatomic) BOOL isGibraltar;

@property (retain, nonatomic) LAContext *authContext;
@property (readonly, nonatomic) struct __SecAccessControl { } *accessControl;
@property (readonly, nonatomic) id objectID;
@property (readonly, nonatomic) id keyType;
@property (readonly, nonatomic) long long keySize;
@property (readonly, nonatomic) BOOL systemKey;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (void)setupKeybagForTesting:(BOOL)a0;
+ (void)setContextErrorHandler:(id /* block */)a0;
+ (BOOL)canUseSEPLocally;

- (void).cxx_destruct;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (BOOL)deleteWithError:(id *)a0;
- (id)initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 error:(id *)a5;
- (id)_initWithAuthContext:(id)a0;
- (id)initWithObjectID:(id)a0 authContext:(id)a1 error:(id *)a2;
- (id)initLocalWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 error:(id *)a3;
- (id)initLocalWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 caller:(id)a5 error:(id *)a6;
- (id)publicKeyWithError:(id *)a0;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (BOOL)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (id)initWithAttributes:(id)a0 authContext:(id)a1 error:(id *)a2;

@end

@class LAContext, NSDictionary, TKCTKDConnection, NSNumber;

@interface TKSEPKey : NSObject

@property (class, readonly, nonatomic) char runsInSystemSession;
@property (class, retain, nonatomic) TKCTKDConnection *ctkdConnection;
@property (class, readonly, nonatomic) char hasSEP;
@property (class, readonly, nonatomic) char isDaytona;
@property (class, readonly, nonatomic) char isGibraltar;
@property (class, retain, nonatomic) NSDictionary *_testing_callerEntitlements;
@property (class, retain, nonatomic) NSNumber *_testing_keybagHandle;

@property (retain, nonatomic) LAContext *authContext;
@property (readonly, nonatomic) struct __SecAccessControl { } *accessControl;
@property (readonly, nonatomic) id objectID;
@property (readonly, nonatomic) id keyType;
@property (readonly, nonatomic) id keySize;
@property (readonly, nonatomic) char systemKey;
@property (readonly, nonatomic) char systemSessionKey;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (char)canUseSEPLocally;
+ (void)setContextErrorHandler:(id /* block */)a0;
+ (void)setupKeybagForTesting:(char)a0;

- (void).cxx_destruct;
- (id)_initWithAuthContext:(id)a0;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)decapsulateKey:(id)a0 error:(id *)a1;
- (char)deleteWithError:(id *)a0;
- (id)initLocalWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 caller:(id)a5 forceSystemSession:(char)a6 error:(id *)a7;
- (id)initLocalWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 forceSystemSession:(char)a3 error:(id *)a4;
- (id)initWithAttributes:(id)a0 authContext:(id)a1 forceSystemSession:(char)a2 error:(id *)a3;
- (id)initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 forceSystemSession:(char)a5 error:(id *)a6;
- (id)initWithObjectID:(id)a0 authContext:(id)a1 forceSystemSession:(char)a2 error:(id *)a3;
- (char)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (id)publicKeyWithError:(id *)a0;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)signDigest:(id)a0 error:(id *)a1;

@end

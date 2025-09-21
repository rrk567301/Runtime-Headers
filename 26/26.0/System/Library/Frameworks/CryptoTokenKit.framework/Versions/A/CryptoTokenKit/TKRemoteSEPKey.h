@class NSData, TKCTKDConnection;

@interface TKRemoteSEPKey : TKSEPKey {
    id _keyType;
    id _keySize;
    BOOL _systemKey;
    NSData *_publicKey;
    id _accessControl;
    BOOL _forceSystemSession;
    TKCTKDConnection *_ctkdConnection;
}

@property (readonly, nonatomic) id keyID;
@property (readonly, nonatomic) NSData *remoteKeyID;

- (BOOL)systemSessionKey;
- (BOOL)deleteWithError:(id *)a0;
- (BOOL)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (id)decapsulateKey:(id)a0 error:(id *)a1;
- (id)keySize;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (BOOL)processServerAtributes:(id)a0 error:(id *)a1;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)objectID;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 forceSystemSession:(BOOL)a5 error:(id *)a6;
- (id)signDigest:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (struct __SecAccessControl { } *)accessControl;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 forceSystemSession:(BOOL)a2 error:(id *)a3;
- (id)keyType;
- (BOOL)systemKey;
- (void).cxx_destruct;
- (id)publicKeyWithError:(id *)a0;

@end

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

- (id)keyType;
- (BOOL)processServerAtributes:(id)a0 error:(id *)a1;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)keySize;
- (id)objectID;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;
- (struct __SecAccessControl { } *)accessControl;
- (BOOL)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)systemSessionKey;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)decapsulateKey:(id)a0 error:(id *)a1;
- (id)signDigest:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)publicKeyWithError:(id *)a0;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 forceSystemSession:(BOOL)a2 error:(id *)a3;
- (BOOL)deleteWithError:(id *)a0;
- (BOOL)systemKey;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 forceSystemSession:(BOOL)a5 error:(id *)a6;

@end

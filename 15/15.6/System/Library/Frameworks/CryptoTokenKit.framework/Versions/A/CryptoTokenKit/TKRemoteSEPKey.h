@class NSData, TKCTKDConnection;

@interface TKRemoteSEPKey : TKSEPKey {
    id _keyType;
    id _keySize;
    char _systemKey;
    NSData *_publicKey;
    id _accessControl;
    char _forceSystemSession;
    TKCTKDConnection *_ctkdConnection;
}

@property (readonly, nonatomic) id keyID;
@property (readonly, nonatomic) NSData *remoteKeyID;

- (void).cxx_destruct;
- (struct __SecAccessControl { } *)accessControl;
- (id)objectID;
- (id)keyType;
- (id)keySize;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 forceSystemSession:(char)a5 error:(id *)a6;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 forceSystemSession:(char)a2 error:(id *)a3;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)decapsulateKey:(id)a0 error:(id *)a1;
- (char)deleteWithError:(id *)a0;
- (char)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (char)processServerAtributes:(id)a0 error:(id *)a1;
- (id)publicKeyWithError:(id *)a0;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)signDigest:(id)a0 error:(id *)a1;
- (char)systemKey;
- (char)systemSessionKey;
- (id)withError:(id *)a0 invoke:(id /* block */)a1;

@end

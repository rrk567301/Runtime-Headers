@interface TKLocalSEPRefKey : TKLocalSEPKey {
    unsigned long long _debugID;
}

@property (readonly, nonatomic) struct aks_ref_key_s { } *AKSRefKey;

- (void)dealloc;
- (id)description;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)objectID;
- (BOOL)deleteWithError:(id *)a0;
- (id)keyType;
- (long long)keySize;
- (id)publicKeyWithError:(id *)a0;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)computeSharedSecret:(id)a0 error:(id *)a1;
- (id)recryptData:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 error:(id *)a3;
- (id)_initWithKeyType:(id)a0 keySize:(long long)a1 accessControl:(struct __SecAccessControl { } *)a2 options:(id)a3 authContext:(id)a4 caller:(id)a5 error:(id *)a6;

@end

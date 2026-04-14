@interface TKLocalSEPSystemKey : TKLocalSEPKey {
    unsigned int _AKSSystemKeyType;
    unsigned int _AKSSystemKeyGeneration;
    unsigned long long _debugID;
}

+ (void)initSystemKeyIDs;
+ (BOOL)hasSystemKey:(unsigned int)a0 ACMHandle:(id)a1;

- (id)objectID;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 isIDUnknown:(BOOL *)a3 error:(id *)a4;
- (BOOL)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)keySize;
- (id)signDigest:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)keyType;
- (BOOL)systemKey;
- (BOOL)systemSessionKey;
- (id)description;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)publicKeyWithError:(id *)a0;

@end

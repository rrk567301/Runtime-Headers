@interface TKLocalSEPSystemKey : TKLocalSEPKey {
    unsigned int _AKSSystemKeyType;
    unsigned int _AKSSystemKeyGeneration;
    unsigned long long _debugID;
}

+ (BOOL)hasSystemKey:(unsigned int)a0 ACMHandle:(id)a1;
+ (void)initSystemKeyIDs;

- (id)keyType;
- (id)keySize;
- (id)objectID;
- (BOOL)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (BOOL)systemSessionKey;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (id)signDigest:(id)a0 error:(id *)a1;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 isIDUnknown:(BOOL *)a3 error:(id *)a4;
- (id)signDigest:(id)a0 attributes:(id)a1 error:(id *)a2;
- (id)publicKeyWithError:(id *)a0;
- (id)description;
- (BOOL)systemKey;

@end

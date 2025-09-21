@interface TKLocalSEPSystemKey : TKLocalSEPKey {
    unsigned int _AKSSystemKeyType;
    unsigned int _AKSSystemKeyGeneration;
    unsigned long long _debugID;
}

+ (char)hasSystemKey:(unsigned int)a0 ACMHandle:(id)a1;
+ (void)initSystemKeyIDs;

- (id)description;
- (id)objectID;
- (id)keyType;
- (id)keySize;
- (id)_initWithObjectID:(id)a0 authContext:(id)a1 caller:(id)a2 isIDUnknown:(char *)a3 error:(id *)a4;
- (id)attestKey:(id)a0 nonce:(id)a1 error:(id *)a2;
- (char)lifetimeControlWithType:(long long)a0 error:(id *)a1;
- (id)publicKeyWithError:(id *)a0;
- (id)signDigest:(id)a0 error:(id *)a1;
- (char)systemKey;
- (char)systemSessionKey;

@end

@interface AKSecurityHelper : NSObject

+ (int)secItemAddWithQuery:(id)a0 result:(const void **)a1;
+ (int)secItemCopyMatchingWithQuery:(id)a0 result:(const void **)a1;
+ (int)secItemDeleteWithQuery:(id)a0;
+ (id)secKeyCopyExternalRepresentationOfKey:(struct __SecKey { } *)a0 error:(id *)a1;
+ (struct __SecKey { } *)secKeyCopyPublicKeyFromRefKey:(struct __SecKey { } *)a0 error:(id *)a1;
+ (id)signData:(id)a0 withKey:(struct __SecKey { } *)a1 error:(id *)a2;

@end

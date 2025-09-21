@class NSString;

@interface HDEncryptedArchiveKeyPair : NSObject <HDEncryptedArchiveKey> {
    struct __SecKey { } *_fullKey;
    struct __SecKey { } *_publicKey;
}

@property (readonly, nonatomic) char symmetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchFromKeychainForLabel:(id)a0 includePrivate:(char)a1 error:(id *)a2;
+ (id)randomKeyPairWithError:(id *)a0;

- (void)dealloc;
- (id)initWithSecKey:(struct __SecKey { } *)a0;
- (char)_deleteFromKeychainWithLabel:(id)a0 public:(char)a1 error:(id *)a2;
- (char)addToKeychainWithLabel:(id)a0 error:(id *)a1;
- (char)deleteFromKeychainWithLabel:(id)a0 error:(id *)a1;
- (id)initWithPublicSecKey:(struct __SecKey { } *)a0;
- (id)keyDataForDecryptionWithError:(id *)a0;
- (id)keyDataForEncryptionWithError:(id *)a0;

@end

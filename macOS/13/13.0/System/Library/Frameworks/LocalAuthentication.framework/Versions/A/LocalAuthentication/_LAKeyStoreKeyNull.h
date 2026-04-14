@class NSString, NSData;

@interface _LAKeyStoreKeyNull : NSObject <LAKeyStoreKey> {
    NSString *_identifier;
    NSData *_acl;
    NSString *_publicKeyHash;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *acl;
@property (readonly, nonatomic) NSData *publicKeyHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)exportBytesWithCompletion:(id /* block */)a0;
- (void)signData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 context:(id)a2 completion:(id /* block */)a3;
- (BOOL)canSignUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)decryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 context:(id)a2 completion:(id /* block */)a3;
- (BOOL)canDecryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)exchangeKeysWithPublicKey:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 secKeyParameters:(id)a2 context:(id)a3 completion:(id /* block */)a4;
- (BOOL)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)encryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 completion:(id /* block */)a2;
- (BOOL)canEncryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)verifyData:(id)a0 signature:(id)a1 secKeyAlgorithm:(struct __CFString { } *)a2 completion:(id /* block */)a3;
- (BOOL)canVerifyUsingSecKeyAlgorithm:(struct __CFString { } *)a0;

@end

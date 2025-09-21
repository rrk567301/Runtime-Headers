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
- (char)canEncryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (char)canDecryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (char)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (char)canSignUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (char)canVerifyUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)decryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)encryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 completion:(id /* block */)a2;
- (void)exchangeKeysWithPublicKey:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 secKeyParameters:(id)a2 context:(id)a3 completion:(id /* block */)a4;
- (void)exportBytesWithCompletion:(id /* block */)a0;
- (void)signData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 context:(id)a2 completion:(id /* block */)a3;
- (void)verifyData:(id)a0 signature:(id)a1 secKeyAlgorithm:(struct __CFString { } *)a2 completion:(id /* block */)a3;

@end

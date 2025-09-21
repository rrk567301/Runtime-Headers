@class LAPublicKey, LARight, NSObject;
@protocol LAKeyStoreKey, OS_dispatch_queue;

@interface LAPrivateKey : NSObject {
    LARight *_right;
    id<LAKeyStoreKey> _key;
    NSObject<OS_dispatch_queue> *_workQueue;
    unsigned long long _instanceID;
}

@property (readonly, nonatomic) LAPublicKey *publicKey;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithKey:(id)a0;
- (id)right;
- (char)canDecryptUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (char)canExchangeKeysUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (char)canSignUsingSecKeyAlgorithm:(struct __CFString { } *)a0;
- (void)decryptData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 completion:(id /* block */)a2;
- (void)exchangeKeysWithPublicKey:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 secKeyParameters:(id)a2 completion:(id /* block */)a3;
- (void)setRight:(id)a0;
- (void)signData:(id)a0 secKeyAlgorithm:(struct __CFString { } *)a1 completion:(id /* block */)a2;

@end

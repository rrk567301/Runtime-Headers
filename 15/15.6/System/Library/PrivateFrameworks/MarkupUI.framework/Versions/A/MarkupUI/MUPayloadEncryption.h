@interface MUPayloadEncryption : NSObject {
    char _keyInitialized;
    char _haveKey;
    unsigned char _key[16];
}

+ (id)sharedInstance;

- (id)init;
- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (void)initializeKey;

@end

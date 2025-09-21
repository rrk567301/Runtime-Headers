@interface AKSignatureDecryptor_Mac : NSObject {
    char _keyInitialized;
    char _haveKey;
    unsigned char _key[16];
}

+ (id)sharedInstance;

- (id)init;
- (void)initializeKey;
- (id)decryptedData:(id)a0;

@end

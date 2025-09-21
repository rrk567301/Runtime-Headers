@interface PPKPayloadEncryption : NSObject {
    char _keyInitialized;
    char _haveKey;
    unsigned char _key[16];
}

- (id)init;
- (void)initializeKey;

@end

@class NSUUID, NSMutableDictionary, NSData, NSMutableData, NSMutableArray;

@interface IDSGroupEncryptionKeyManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableData *_encryptionContext;
    unsigned long long _encryptionKeySize;
    NSMutableArray *_previousEncryptingKeys;
    NSMutableArray *_previousEncryptingKeyIndexes;
    NSMutableArray *_previousEncryptingKeySalts;
    NSData *_currentEncryptingKey;
    NSUUID *_currentEncryptingKeyIndex;
    NSData *_currentEncryptingKeySalt;
    unsigned int _currentEncryptingKeyGeneration;
    NSMutableDictionary *_currentDecryptingKeysAndSalts;
}

- (void).cxx_destruct;
- (void)enumerateDecryptingKeysAndSaltsUsingBlock:(id /* block */)a0;
- (id)initWithEncryptionContext:(id)a0 encryptionKeySize:(unsigned long long)a1;
- (void)invalidateKeyMaterialByKeyIndexes:(id)a0;
- (char)recvKeyMaterial:(id)a0;
- (char)useCurrentEncryptionkeyWithHandler:(id /* block */)a0;
- (void)purgeOldKeyMaterial;
- (void)receiveMembershipChangedInformation:(unsigned char)a0;
- (char)useDecryptingKeyForKeyIndex:(id)a0 handler:(id /* block */)a1;

@end

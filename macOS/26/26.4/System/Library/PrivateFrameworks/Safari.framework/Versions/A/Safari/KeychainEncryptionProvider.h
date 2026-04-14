@class NSString, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface KeychainEncryptionProvider : NSObject <WBSEncryptionProvider> {
    NSString *_keychainLabel;
    NSData *_encryptionKey;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (void).cxx_destruct;
- (id)init;
- (id)encryptData:(id)a0;
- (id)decryptData:(id)a0;
- (id)_accessGroupWriteQueryWithData:(id)a0;
- (id)_accessGroupReadQuery;
- (id)_findExistingEncryptionKey;
- (id)_generateEncryptionKey;
- (id)_legacyReadQuery;
- (void)_migrateKeyToAccessGroup:(id)a0;
- (id)ensureEncryptionKey;
- (id)initWithKeychainLabel:(id)a0;

@end

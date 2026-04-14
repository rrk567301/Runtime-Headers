@class NSDictionary;

@interface NSPersistentUIWindowInfo : NSObject {
    unsigned int windowID;
    int currentStatus;
    unsigned int currentGeneration;
    unsigned char recordEncryptionKey[16];
    NSDictionary *_externalPublicProperties;
}

@property unsigned int windowID;

- (void)dealloc;
- (id)init;
- (BOOL)isGlobal;
- (void)setExternalPublicProperties:(id)a0;
- (id)copyAllPublicProperties;
- (const char *)recordEncryptionKey;

@end

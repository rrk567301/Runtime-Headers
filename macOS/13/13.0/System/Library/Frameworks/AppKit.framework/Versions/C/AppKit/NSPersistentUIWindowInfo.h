@class NSData, NSDictionary;

@interface NSPersistentUIWindowInfo : NSObject {
    unsigned char _recordEncryptionKey[16];
    NSDictionary *_externalPublicProperties;
}

@property (readonly) unsigned int windowID;
@property (readonly, copy) NSData *recordEncryptionKey;
@property (readonly, getter=isGlobal) BOOL global;
@property int currentStatus;
@property unsigned int currentGeneration;

- (void).cxx_destruct;
- (void)setExternalPublicProperties:(id)a0;
- (id)copyAllPublicProperties;
- (id)initWithWindowID:(unsigned int)a0;

@end

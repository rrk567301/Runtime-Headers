@class NSData;

@interface SKAPresenceEncryptionKey : NSObject

@property (retain, nonatomic) NSData *keyData;
@property (readonly, nonatomic) NSData *keyMaterial;

+ (id)logger;

- (void).cxx_destruct;
- (id)_randomBytesWithLength:(unsigned long long)a0 error:(id *)a1;
- (id)initWithNewKeyMaterial;
- (id)initWithKeyMaterial:(id)a0;
- (id)encryptPayload:(id)a0;
- (id)decryptPayload:(id)a0;
- (BOOL)_initializeNewKeyMaterial;

@end

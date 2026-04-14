@class NSData;

@interface WBSHistoryCrypto : NSObject {
    NSData *_cachedCryptographicKey;
}

@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) NSData *cryptographicKey;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCryptographicKey:(id)a0 salt:(id)a1;
- (id)_createCryptographicKey;
- (id)_createOrLoadCryptographicKey;
- (id)encryptDictionary:(id)a0;
- (id)decryptDictionary:(id)a0;

@end

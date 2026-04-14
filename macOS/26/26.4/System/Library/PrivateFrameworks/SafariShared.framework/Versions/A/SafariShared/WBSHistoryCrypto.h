@class NSData;

@interface WBSHistoryCrypto : NSObject

@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) NSData *cryptographicKey;

+ (void)fetchCryptographicKeyFromKeychainIfNeeded;

- (void).cxx_destruct;
- (id)init;
- (id)decryptDictionary:(id)a0;
- (id)encryptDictionary:(id)a0;
- (id)initWithCryptographicKey:(id)a0 salt:(id)a1;

@end

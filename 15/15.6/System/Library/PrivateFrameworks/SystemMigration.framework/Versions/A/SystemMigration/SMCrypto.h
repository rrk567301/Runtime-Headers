@class NSData;

@interface SMCrypto : NSObject

@property (copy, nonatomic) NSData *key;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0;
- (id)decryptData:(id)a0;
- (id)encryptData:(id)a0;
- (id)bytes:(unsigned long long)a0;
- (id)encrypt:(char)a0 data:(id)a1 withKey:(id)a2 iv:(id)a3;

@end

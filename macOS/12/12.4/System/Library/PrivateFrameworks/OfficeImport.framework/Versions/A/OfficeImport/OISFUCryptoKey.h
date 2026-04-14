@class NSString, NSData;

@interface OISFUCryptoKey : NSObject {
    unsigned int mIterationCount;
    char *mKey;
    unsigned long long mKeyLength;
    NSData *mSaltData;
}

@property (readonly, nonatomic) NSString *passphrase;

- (void)dealloc;
- (const char *)keyData;
- (int)keyType;
- (unsigned int)iterationCount;
- (unsigned long long)keyLength;
- (id)initAes128KeyFromPassphrase:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2 saltData:(id)a3;
- (id)saltData;
- (id)initAes128KeyFromPassphrase:(id)a0 iterationCount:(unsigned int)a1;
- (id)initAes128KeyFromPassphrase:(id)a0 withIterationCountAndSaltDataFromCryptoKey:(id)a1;
- (id)initAes128KeyFromPassphrase:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2;
- (id)initAes128KeyFromPassphrase:(id)a0 iterationCount:(unsigned int)a1 saltData:(id)a2;
- (id)initAes128Key:(const char *)a0 length:(unsigned int)a1 iterationCount:(unsigned int)a2;

@end

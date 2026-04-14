@class NSString, OISFUCryptor;
@protocol SFUOutputStream;

@interface OISFUCryptoOutputStream : NSObject <SFUOutputStream> {
    id<SFUOutputStream> mBaseStream;
    OISFUCryptor *mCryptor;
    BOOL mIsClosed;
    BOOL mComputeCrc32;
    unsigned int mCrc32;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)encodedLengthForDataLength:(unsigned long long)a0 key:(id)a1;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (id)inputStream;
- (id)initForEncryptionWithOutputStream:(id)a0 key:(id)a1 computeCrc32:(BOOL)a2;
- (id)initForEncryptionWithOutputStream:(id)a0 key:(id)a1;
- (unsigned int)crc32;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;
- (BOOL)canSeek;
- (id)closeLocalStream;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (BOOL)canCreateInputStream;

@end

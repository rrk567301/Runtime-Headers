@class NSString, SFUCryptor;
@protocol SFUOutputStream;

@interface SFUCryptoOutputStream : NSObject <SFUOutputStream> {
    id<SFUOutputStream> mBaseStream;
    SFUCryptor *mCryptor;
    char mIsClosed;
    char mComputeCrc32;
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
- (char)canSeek;
- (char)canCreateInputStream;
- (id)closeLocalStream;
- (unsigned int)crc32;
- (id)initForEncryptionWithOutputStream:(id)a0 key:(id)a1;
- (id)initForEncryptionWithOutputStream:(id)a0 key:(id)a1 computeCrc32:(char)a2;
- (void)seekToOffset:(long long)a0 whence:(int)a1;
- (void)writeBuffer:(const char *)a0 size:(unsigned long long)a1;

@end

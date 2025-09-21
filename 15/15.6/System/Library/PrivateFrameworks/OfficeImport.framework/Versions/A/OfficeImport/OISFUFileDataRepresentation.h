@class NSString, OISFUCryptoKey;
@protocol SFUInputStream;

@interface OISFUFileDataRepresentation : OISFUDataRepresentation {
    NSString *mPath;
    int mSharedFd;
    long long mFileLength;
    unsigned int mFileType;
    char mHasFileAttributes;
    long long mPlaintextDataLength;
    OISFUCryptoKey *mCryptoKey;
    id<SFUInputStream> mInputStream;
    char mDeleteFileWhenDone;
}

- (void)dealloc;
- (id)description;
- (id)path;
- (long long)encodedLength;
- (unsigned int)fileType;
- (id)initWithPath:(id)a0;
- (void)setFileType:(unsigned int)a0;
- (char)isEncrypted;
- (id)inputStream;
- (long long)dataLength;
- (char)isReadable;
- (void)deleteFileWhenDone;
- (char)hasSameLocationAs:(id)a0;
- (id)initWithCopyOfData:(id)a0 path:(id)a1;
- (id)initWithCopyOfData:(id)a0 path:(id)a1 cryptoKey:(id)a2;
- (id)initWithInputStream:(id)a0 cryptoKey:(id)a1 dataLength:(long long)a2;
- (id)initWithPath:(id)a0 cryptoKey:(id)a1 dataLength:(long long)a2;
- (id)initWithPath:(id)a0 sharedFileDescriptor:(int)a1;
- (id)initWithPath:(id)a0 sharedFileDescriptor:(int)a1 cryptoKey:(id)a2 dataLength:(long long)a3;
- (char)isCryptoKeyIdenticalToKey:(id)a0;
- (void)readFileAttributes;

@end

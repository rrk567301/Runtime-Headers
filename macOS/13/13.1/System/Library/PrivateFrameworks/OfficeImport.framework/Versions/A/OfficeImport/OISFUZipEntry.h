@class OISFUDataRepresentation, OISFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

@interface OISFUZipEntry : OISFUDataRepresentation {
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
    unsigned long long mDataOffset;
    BOOL mHasDataOffset;
    unsigned long long mEncodedLength;
    BOOL mHasEncodedLength;
    OISFUCryptoKey *mCryptoKey;
}

- (void)dealloc;
- (id)data;
- (BOOL)isCompressed;
- (long long)encodedLength;
- (id)inputStream;
- (BOOL)isEncrypted;
- (void)setCryptoKey:(id)a0;
- (long long)dataLength;
- (BOOL)isReadable;
- (unsigned int)crc;
- (id)initFromCentralFileHeader:(const char *)a0 dataRepresentation:(id)a1;
- (id)initWithDataRepresentation:(id)a0 compressionMethod:(int)a1 compressedSize:(unsigned long long)a2 uncompressedSize:(unsigned long long)a3 offset:(unsigned long long)a4 crc:(unsigned int)a5;
- (void)copyToFile:(id)a0;
- (BOOL)isBackedByFile;
- (id)backingFilePath;
- (unsigned long long)backingFileDataOffset;
- (void)readZip64ExtraField:(const char *)a0 size:(unsigned long long)a1;
- (void)setCompressionFlags:(unsigned short)a0;
- (void)setDataLength:(long long)a0;
- (unsigned long long)dataOffset;
- (unsigned long long)calculateEncodedLength;

@end

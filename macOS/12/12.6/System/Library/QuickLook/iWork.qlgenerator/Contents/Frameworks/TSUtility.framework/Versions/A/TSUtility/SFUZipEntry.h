@class SFUCryptoKey, SFUDataRepresentation;
@protocol SFUZipArchiveDataRepresentation;

@interface SFUZipEntry : SFUDataRepresentation {
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    unsigned long long mCompressedSize;
    unsigned long long mUncompressedSize;
    unsigned long long mOffset;
    unsigned int mCrc;
    unsigned long long mDataOffset;
    BOOL mHasDataOffset;
    unsigned long long mEncodedLength;
    BOOL mHasEncodedLength;
    SFUCryptoKey *mCryptoKey;
}

- (void)dealloc;
- (id)data;
- (long long)encodedLength;
- (BOOL)isCompressed;
- (void)setCryptoKey:(id)a0;
- (id)inputStream;
- (BOOL)isEncrypted;
- (long long)dataLength;
- (BOOL)isReadable;
- (void)setDataLength:(long long)a0;
- (void)copyToFile:(id)a0;
- (id)initFromCentralFileHeader:(const char *)a0 dataRepresentation:(id)a1;
- (void)readZip64ExtraField:(const char *)a0 size:(unsigned long long)a1;
- (id)initWithDataRepresentation:(id)a0 compressionMethod:(int)a1 compressedSize:(unsigned long long)a2 uncompressedSize:(unsigned long long)a3 offset:(unsigned long long)a4 crc:(unsigned int)a5;
- (unsigned int)crc;
- (void)setCompressionFlags:(unsigned short)a0;
- (unsigned long long)dataOffset;
- (unsigned long long)calculateEncodedLength;
- (BOOL)isBackedByFile;
- (id)backingFilePath;
- (unsigned long long)backingFileDataOffset;

@end

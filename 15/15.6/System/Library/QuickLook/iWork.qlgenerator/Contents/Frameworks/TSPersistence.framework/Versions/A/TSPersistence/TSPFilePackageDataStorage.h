@class NSString, TSPFilePackage;
@protocol TSPCryptoInfo;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    NSString *_path;
    TSPFilePackage *_package;
    _Atomic char _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic char _didCalculateCRC;
    _Atomic unsigned int _CRC;
    _Atomic unsigned long long _materializedLength;
    _Atomic char _isMissingData;
    char _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

- (id)init;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (char)isReadable;
- (unsigned char)packageIdentifier;
- (unsigned int)CRC;
- (char)isInPackage:(id)a0;
- (char)isMissingData;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (char)isLengthPrecise;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(char)a1;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)a0;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2 materializedLength:(unsigned long long)a3;
- (char)isUnmaterializedDueToPartiallyDownloadedDocument;
- (char)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(char)a2;
- (unsigned long long)materializedLength;
- (id)newDataCopyReadChannelProviderWithDocumentURL:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(char)a0;
- (char)shouldValidateCRCOnWrite;
- (id)streamReadChannelForWriteWithPackageWriter:(id)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(char)a4 error:(id *)a5;

@end

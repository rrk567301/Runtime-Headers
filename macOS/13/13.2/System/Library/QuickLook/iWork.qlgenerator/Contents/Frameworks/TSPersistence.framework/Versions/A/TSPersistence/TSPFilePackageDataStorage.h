@class NSString, TSPFilePackage;
@protocol TSPCryptoInfo;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    NSString *_path;
    TSPFilePackage *_package;
    _Atomic BOOL _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic BOOL _didCalculateCRC;
    _Atomic unsigned int _CRC;
    _Atomic unsigned long long _materializedLength;
    _Atomic BOOL _isMissingData;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

- (id)init;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (BOOL)isReadable;
- (unsigned char)packageIdentifier;
- (unsigned int)CRC;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (BOOL)isInPackage:(id)a0;
- (BOOL)isMissingData;
- (unsigned long long)fileFormatVersion;
- (BOOL)shouldValidateCRCOnWrite;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;
- (id)newDataCopyReadChannelProviderWithDocumentURL:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (unsigned long long)materializedLength;
- (void)didInitializeFromDocumentURL:(id)a0;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(BOOL)a1;
- (id)decryptionInfo;
- (BOOL)isLengthPrecise;
- (BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a0;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2 materializedLength:(unsigned long long)a3;
- (id)streamReadChannelForWriteWithPackageWriter:(id)a0;

@end

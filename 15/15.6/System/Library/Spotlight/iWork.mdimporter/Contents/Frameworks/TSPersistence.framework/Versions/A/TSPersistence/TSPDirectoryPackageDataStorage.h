@class NSString, TSPDirectoryPackage;
@protocol TSPCryptoInfo;

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {
    NSString *_path;
    unsigned char _packageIdentifier;
    _Atomic char _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic unsigned long long _materializedLength;
    _Atomic char _isMissingData;
    char _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

@property (readonly, weak, nonatomic) TSPDirectoryPackage *package;

- (id)init;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (unsigned char)packageIdentifier;
- (char)isInPackage:(id)a0;
- (char)isMissingData;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (char)isLengthPrecise;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(char)a1;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)a0;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2 materializedLength:(unsigned long long)a3;
- (char)isUnmaterializedDueToPartiallyDownloadedDocument;
- (char)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(char)a2;
- (unsigned long long)materializedLength;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(char)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(char)a4 error:(id *)a5;

@end

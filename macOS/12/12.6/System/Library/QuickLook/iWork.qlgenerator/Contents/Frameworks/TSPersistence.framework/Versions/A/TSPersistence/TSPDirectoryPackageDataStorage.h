@class NSString, TSPDirectoryPackage;
@protocol TSPCryptoInfo;

@interface TSPDirectoryPackageDataStorage : TSPFileDataStorage {
    NSString *_path;
    unsigned char _packageIdentifier;
    _Atomic BOOL _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic BOOL _isMissingData;
    BOOL _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

@property (readonly, weak, nonatomic) TSPDirectoryPackage *package;

- (id)init;
- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (unsigned char)packageIdentifier;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (BOOL)isInPackage:(id)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (BOOL)isMissingData;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2;
- (unsigned long long)fileFormatVersion;
- (void)didInitializeFromDocumentURL:(id)a0;
- (id)decryptionInfo;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(BOOL)a1;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (BOOL)isLengthPrecise;
- (BOOL)isUnmaterializedDueToPartiallyDownloadedDocument;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(BOOL)a0;

@end

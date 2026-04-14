@class NSString, TSPFilePackage;
@protocol TSPCryptoInfo;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {
    NSString *_path;
    id<TSPCryptoInfo> _decryptionInfo;
    TSPFilePackage *_package;
    _Atomic BOOL _didCalculateEncodedLength;
    _Atomic unsigned long long _encodedLength;
    _Atomic BOOL _didCalculateCRC;
    _Atomic unsigned int _CRC;
    _Atomic BOOL _isMissingData;
    BOOL _gilligan_isRemote;
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
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(BOOL)a4 error:(id *)a5;
- (id)initWithPath:(id)a0 package:(id)a1 decryptionInfo:(id)a2;
- (BOOL)gilligan_isRemote;
- (void)didInitializeFromDocumentURL:(id)a0;
- (id)decryptionInfo;
- (void)setEncodedLength:(unsigned long long)a0 isMissingData:(BOOL)a1;
- (BOOL)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(BOOL)a2;
- (void)setGilligan_isRemote:(BOOL)a0;
- (id)newDataCopyReadChannelProviderWithDocumentURL:(id)a0 encryptionInfo:(id)a1 error:(id *)a2;
- (BOOL)shouldValidateCRCOnWrite;
- (id)streamReadChannelForWriteWithPackageWriter:(id)a0;

@end

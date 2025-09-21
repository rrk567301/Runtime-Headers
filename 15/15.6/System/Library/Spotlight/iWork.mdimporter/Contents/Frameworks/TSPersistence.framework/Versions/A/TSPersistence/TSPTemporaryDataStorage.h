@class TSPTemporaryDataStorageURL;
@protocol TSPCryptoInfo;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {
    TSPTemporaryDataStorageURL *_temporaryDataStorageURL;
    char _leakTemporaryFile;
    char _isUnmaterializedDueToPartiallyDownloadedDocument;
    id<TSPCryptoInfo> _decryptionInfo;
}

@property (readonly, nonatomic) char isMissingOriginalData;
@property (readonly, nonatomic) char isMissingData;

- (void)dealloc;
- (id)init;
- (unsigned long long)length;
- (void).cxx_destruct;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (char)isLengthPrecise;
- (id)decryptionInfo;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1;
- (id)initWithTemporaryDataStorageURL:(id)a0 decryptionInfo:(id)a1 isMissingOriginalData:(char)a2 isMissingData:(char)a3 isUnmaterializedDueToPartiallyDownloadedDocument:(char)a4;
- (char)isUnmaterializedDueToPartiallyDownloadedDocument;
- (void)leakTemporaryFile;
- (char)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(char)a2;
- (unsigned long long)materializedLength;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(char)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(char)a4 error:(id *)a5;

@end

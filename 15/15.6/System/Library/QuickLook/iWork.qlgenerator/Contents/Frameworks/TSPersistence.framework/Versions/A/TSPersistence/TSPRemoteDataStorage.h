@class NSMutableIndexSet, NSIndexSet, SFUCryptoKey, NSURL, NSDate, NSObject, TSPTemporaryDataStorage;
@protocol OS_dispatch_queue, TSPRemoteDataStorageDelegate, TSPDataStorage;

@interface TSPRemoteDataStorage : TSPFileDataStorage <TSPDataStorageDownloadable> {
    SFUCryptoKey *_encryptionKey;
    NSObject<OS_dispatch_queue> *_accessQueue;
    TSPTemporaryDataStorage *_temporaryMaterializedDataStorage;
    unsigned long long _changeCount;
    NSMutableIndexSet *_unmaterializedRanges;
    id<TSPDataStorage> _packageDataStorage;
    long long _uploadStatus;
    NSDate *_modificationDate;
    char _canDownload;
    _Atomic char _isUnmaterializedDueToPartiallyDownloadedDocument;
    _Atomic unsigned long long _materializedLength;
}

@property (weak, nonatomic) id<TSPRemoteDataStorageDelegate> delegate;
@property (readonly, nonatomic) NSURL *remoteURL;
@property (readonly, nonatomic) char isMaterialized;
@property (readonly, nonatomic) NSIndexSet *unmaterializedRanges;
@property (readonly, nonatomic) unsigned long long firstUnmaterializedIndex;
@property (readonly, nonatomic) long long downloadPriority;
@property (nonatomic) long long uploadStatus;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) id<TSPDataStorage> packageDataStorage;

+ (id)notificationQueue;
+ (id)ioQueue;

- (unsigned long long)length;
- (void).cxx_destruct;
- (unsigned long long)encodedLength;
- (char)isReadable;
- (unsigned char)packageIdentifier;
- (char)canDownload;
- (char)needsDownload;
- (id)packageLocator;
- (void)performIOChannelReadWithAccessor:(id /* block */)a0;
- (void)performReadWithAccessor:(id /* block */)a0;
- (unsigned long long)fileFormatVersion;
- (void)didReceiveRemoteData:(id)a0 decryptionInfo:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (void)didReceiveRemoteDataWithReadChannel:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
- (void)didAddDownloadObserverWithData:(id)a0;
- (void)didReceiveRemoteDataWithDecryptionInfo:(id)a0 noEncryptionHandler:(id /* block */)a1 createReadChannelForCryptoTranscodeBlock:(id /* block */)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (char)isLengthPrecise;
- (id)dataStorageToUse;
- (id)decryptionInfo;
- (void)didInitializeFromDocumentURL:(id)a0;
- (void)didReceivePartialRemoteData:(id)a0 decryptionKey:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)didReceiveRemoteDataAtURL:(id)a0 canMove:(char)a1 decryptionInfo:(id)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)didSaveWithChangeCount:(unsigned long long)a0 packageDataStorage:(id)a1;
- (id)initWithRemoteURL:(id)a0 length:(unsigned long long)a1 encryptionKey:(id)a2 canDownload:(char)a3 downloadPriority:(long long)a4 uploadStatus:(long long)a5 modificationDate:(id)a6;
- (id)initWithRemoteURL:(id)a0 unmaterializedRanges:(id)a1 encryptionKey:(id)a2 canDownload:(char)a3 downloadPriority:(long long)a4 uploadStatus:(long long)a5 modificationDate:(id)a6 materializedLength:(unsigned long long)a7 packageDataStorage:(id)a8;
- (char)isPartialDataInPackage:(id)a0;
- (char)isUnmaterializedDueToPartiallyDownloadedDocument;
- (char)linkOrCopyToURL:(id)a0 encryptionInfo:(id)a1 canLink:(char)a2;
- (char)materializeFromPartiallyDownloadedDocumentForData:(id)a0 withContentsOfURL:(id)a1 canMove:(char)a2 error:(id *)a3;
- (unsigned long long)materializedLength;
- (char)migrateToTemporaryDataStorageIfNeeded;
- (char)p_copyPartiallyMaterializedDataToURL:(id)a0 encryptionInfo:(id)a1;
- (char)p_isMaterialized;
- (unsigned long long)p_materializedLength;
- (id)p_migrateToTemporaryDataStorageWithEncryptionInfo:(id)a0 updateInternalDataStorages:(char)a1;
- (void)p_notifyDownloadObserversWithStatus:(long long)a0 error:(id)a1;
- (unsigned long long)reservedLength;
- (void)setIsUnmaterializedDueToPartiallyDownloadedDocument:(char)a0;
- (id)writeData:(id)a0 toPackageWriter:(id)a1 infoMessage:(void *)a2 preferredFilename:(id)a3 shouldRemoveData:(char)a4 error:(id *)a5;

@end

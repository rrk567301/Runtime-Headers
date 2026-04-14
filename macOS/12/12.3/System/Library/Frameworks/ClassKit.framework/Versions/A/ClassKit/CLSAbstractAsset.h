@class NSString, UTType, NSURL, NSDate, NSError, NSMutableArray;

@interface CLSAbstractAsset : CLSObject <CLSAssetDownloadProgressNotifiable, CLSAssetDownloadObservable> {
    NSURL *_URL;
    BOOL _URLIsSecurityScoped;
    BOOL _thumbnailURLIsSecurityScoped;
    BOOL _downloaded;
    NSMutableArray *_downloadObservers;
    long long _schoolworkSyncStatus;
    UTType *_fileUTType;
    NSString *_title;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSURL *thumbnailURL;
@property (nonatomic, getter=isOriginal) BOOL original;
@property (nonatomic) long long schoolworkSyncStatus;
@property (nonatomic) long long fileSizeInBytes;
@property (copy, nonatomic) UTType *fileUTType;
@property (copy, nonatomic) NSString *originalFilename;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long displayOrder;
@property (copy, nonatomic) NSString *ownerPersonID;
@property (retain, nonatomic) NSDate *urlExpirationDate;
@property (nonatomic) long long parentEntityType;
@property (copy, nonatomic) NSString *brItemID;
@property (copy, nonatomic) NSString *brOwnerName;
@property (copy, nonatomic) NSString *brZoneName;
@property (copy, nonatomic) NSString *brShareName;
@property (copy, nonatomic) NSString *ubiquitousContainerName;
@property (copy, nonatomic) NSString *relativePathWithinContainer;
@property (nonatomic, getter=isDownloaded) BOOL downloaded;
@property (nonatomic) double fractionDownloaded;
@property (copy, nonatomic) NSError *downloadError;
@property (readonly, nonatomic) Class parentEntityClass;
@property (readonly, copy, nonatomic) NSString *filenameExtension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)validateObject:(id *)a0;
- (void)mergeWithObject:(id)a0;
- (void)addDownloadObserver:(id)a0;
- (void)removeDownloadObserver:(id)a0;
- (void)setFileSizeInBytesFromURL:(id)a0;
- (void)setFileUTTypeFromURL:(id)a0;
- (void)willSaveObject;
- (BOOL)devModeOn;
- (void)queued_notifyDownloadCompletion;
- (id)downloadObservers;
- (void)driveAssetUrlSuitableForOpeningWithCompletion:(id /* block */)a0;
- (void)cloudKitAssetUrlSuitableForOpeningWithCompletion:(id /* block */)a0;
- (void)queued_notifyDownloadProgressFraction:(double)a0;
- (oneway void)clientRemote_invalidate;
- (oneway void)clientRemote_downloadProgressFraction:(double)a0 withError:(id)a1;
- (oneway void)clientRemote_downloadCompleted:(BOOL)a0 withError:(id)a1;
- (void)_setThumbnailURL:(id)a0;
- (void)becomeChildOf:(id)a0;
- (id)filenameForCKContentStoreCache;
- (id)thumbnailFilenameForCKContentStoreCache;
- (BOOL)hasNotBeenRereferencedByServer;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)a0;
- (void)urlSuitableForStreamingWithCompletion:(id /* block */)a0;

@end

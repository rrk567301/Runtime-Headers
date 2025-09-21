@class NSDate;

@interface VUIMediaEntityAssetControllerState : NSObject <NSCopying>

@property (nonatomic) unsigned long long status;
@property (nonatomic) double downloadProgress;
@property (nonatomic) char supportsCancellation;
@property (nonatomic) char supportsPausing;
@property (nonatomic) char renewsOfflineKeysAutomatically;
@property (nonatomic) char allowsCellular;
@property (retain, nonatomic) NSDate *downloadExpirationDate;
@property (retain, nonatomic) NSDate *availabilityEndDate;
@property (nonatomic) char performsKeyFetchOnly;
@property (nonatomic) char downloadFailedDueToError;
@property (nonatomic) unsigned long long bytesToDownload;
@property (nonatomic) unsigned long long bytesDownloaded;
@property (readonly, nonatomic, getter=isDownloadInProgress) char downloadInProgress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end

@class NSError, CKDownloadAsset;

@interface CKDownloadStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned char state;
@property unsigned long long bytesDownloaded;
@property unsigned long long bytesExpected;
@property double estimatedTimeRemaining;
@property BOOL isAssetCached;
@property (retain) NSError *error;
@property (retain) CKDownloadAsset *downloadedAsset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

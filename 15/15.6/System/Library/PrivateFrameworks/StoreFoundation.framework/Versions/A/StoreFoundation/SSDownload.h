@class NSArray, NSString, NSURL, SSDownloadMetadata, SSDownloadStatus, NSNumber;

@interface SSDownload : NSObject <NSSecureCoding> {
    char _needsPreInstallValidation;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) SSDownloadMetadata *metadata;
@property (retain, nonatomic) SSDownloadStatus *status;
@property unsigned long long downloadType;
@property char needsDisplayInDock;
@property char isInServerQueue;
@property char installAfterLogout;
@property (copy) NSNumber *accountDSID;
@property (copy) NSString *cancelURLString;
@property (copy) NSString *customDownloadPath;
@property char skipInstallPhase;
@property char didAutoUpdate;
@property (copy) NSString *installPath;
@property (copy) NSURL *relaunchAppWithBundleURL;
@property char skipAssetDownloadIfNotAlreadyOnDisk;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)cancelWithPrompt:(char)a0;
- (void)cancelWithPrompt:(char)a0 storeClient:(id)a1;
- (void)cancelWithStoreClient:(id)a0;
- (id)initWithAssets:(id)a0 metadata:(id)a1;
- (void)pauseWithStoreClient:(id)a0;
- (id)primaryAsset;
- (void)resumeWithStoreClient:(id)a0;
- (void)setUseUniqueDownloadFolder:(char)a0;

@end

@class NSArray, NSString, NSURL, SSDownloadMetadata, SSDownloadStatus, NSNumber;

@interface SSDownload : NSObject <NSSecureCoding> {
    BOOL _needsPreInstallValidation;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *assets;
@property (copy, nonatomic) SSDownloadMetadata *metadata;
@property (retain, nonatomic) SSDownloadStatus *status;
@property unsigned long long downloadType;
@property BOOL needsDisplayInDock;
@property BOOL isInServerQueue;
@property BOOL installAfterLogout;
@property (copy) NSNumber *accountDSID;
@property (copy) NSString *cancelURLString;
@property (copy) NSString *customDownloadPath;
@property BOOL skipInstallPhase;
@property BOOL didAutoUpdate;
@property (copy) NSString *installPath;
@property (copy) NSURL *relaunchAppWithBundleURL;
@property BOOL skipAssetDownloadIfNotAlreadyOnDisk;

- (void)pause;
- (void)cancel;
- (void)encodeWithCoder:(id)a0;
- (void)resume;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)cancelWithPrompt:(BOOL)a0;
- (void)cancelWithPrompt:(BOOL)a0 storeClient:(id)a1;
- (void)cancelWithStoreClient:(id)a0;
- (id)initWithAssets:(id)a0 metadata:(id)a1;
- (void)pauseWithStoreClient:(id)a0;
- (id)primaryAsset;
- (void)resumeWithStoreClient:(id)a0;
- (void)setUseUniqueDownloadFolder:(BOOL)a0;

@end

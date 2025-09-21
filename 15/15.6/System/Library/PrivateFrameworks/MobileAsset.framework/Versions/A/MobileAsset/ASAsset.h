@class NSString, NSDictionary, MAAsset, NSDate, NSURL;

@interface ASAsset : NSObject {
    NSDictionary *_attributes;
    NSString *_clientName;
    NSString *_identifier;
    MAAsset *_maAsset;
}

@property (retain, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSDictionary *fullAttributes;
@property (retain, nonatomic) MAAsset *maAsset;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSDate *installDate;
@property (readonly, nonatomic) NSURL *localURL;
@property (nonatomic) long long garbageCollectionBehavior;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) NSDictionary *downloadOptions;
@property (nonatomic) char userInitiatedDownload;

+ (char)nonUserInitiatedDownloadsAllowed;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)identifier;
- (void)cancelDownload:(id /* block */)a0;
- (char)isPresentOnDisk;
- (void)resumeDownload:(id /* block */)a0;
- (void)_downloadWithOptions:(id)a0 shouldFireCallback:(char)a1;
- (id)_getLocalAttribute:(id)a0;
- (void)adjustDownloadOptions:(id)a0 completion:(id /* block */)a1;
- (id)assetServerUrl;
- (long long)assetStateForStateString:(id)a0;
- (void)beginDownloadWithOptions:(id)a0;
- (char)cancelDownloadAndReturnError:(id *)a0;
- (id)initWithAssetType:(id)a0 attributes:(id)a1;
- (id)initWithMAAsset:(id)a0;
- (void)pauseDownload:(id /* block */)a0;
- (char)pauseDownloadAndReturnError:(id *)a0;
- (void)purge:(id /* block */)a0;
- (char)purgeAndReturnError:(id *)a0;
- (char)requiredDiskSpaceIsAvailable:(long long *)a0 error:(id *)a1;
- (char)requiredDiskSpaceIsAvailableForDownloadOptions:(id)a0 requiredBytes:(long long *)a1 error:(id *)a2;
- (char)resumeDownloadAndReturnError:(id *)a0;
- (id)systemAppServerUrl;

@end

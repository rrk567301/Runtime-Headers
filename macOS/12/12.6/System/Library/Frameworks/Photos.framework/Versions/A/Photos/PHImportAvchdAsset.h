@class NSString;

@interface PHImportAvchdAsset : PHImportAsset {
    NSString *_fileName;
    NSString *_clipIndex;
    id _avchdAssetId;
}

@property (readonly) NSString *fingerprint;

+ (void)checkForAVCHDContentAtURL:(id)a0 subURLs:(id)a1 completion:(id /* block */)a2;
+ (void)avchdAssetsFromSource:(id)a0 completion:(id /* block */)a1;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fileExtension;
- (unsigned long long)fileSize;
- (id)fileCreationDate;
- (id)fileName;
- (id)creationDate;
- (id)avchdAssetId;
- (id)initWithAvAsset:(id)a0 source:(id)a1;
- (BOOL)canReference;
- (BOOL)isSloMo;
- (BOOL)isAVCHD;
- (BOOL)isTimelapse;
- (id)sidecars;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;

@end

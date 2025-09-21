@class NSString;

@interface PHImportAvchdAsset : PHImportAsset {
    NSString *_fileName;
    NSString *_clipIndex;
    id _avchdAssetId;
}

+ (void)avchdAssetsFromSource:(id)a0 completion:(id /* block */)a1;
+ (void)checkForAVCHDContentAtURL:(id)a0 subURLs:(id)a1 completion:(id /* block */)a2;

- (BOOL)isTimelapse;
- (id)fileName;
- (BOOL)isSloMo;
- (unsigned long long)fileSize;
- (id)fileExtension;
- (id)creationDate;
- (id)fileCreationDate;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAVCHD;
- (id)avchdAssetId;
- (BOOL)canReference;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAvAsset:(id)a0 source:(id)a1;
- (id)sidecars;

@end

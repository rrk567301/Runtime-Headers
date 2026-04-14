@class NSString;

@interface PHImportAvchdAsset : PHImportAsset {
    NSString *_fileName;
    NSString *_clipIndex;
    id _avchdAssetId;
}

+ (void)avchdAssetsFromSource:(id)a0 completion:(id /* block */)a1;
+ (void)checkForAVCHDContentAtURL:(id)a0 subURLs:(id)a1 completion:(id /* block */)a2;

- (id)fileName;
- (id)creationDate;
- (BOOL)isEqual:(id)a0;
- (id)fileExtension;
- (BOOL)isSloMo;
- (id)fileCreationDate;
- (void).cxx_destruct;
- (BOOL)isTimelapse;
- (unsigned long long)fileSize;
- (BOOL)isAVCHD;
- (id)avchdAssetId;
- (BOOL)canReference;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAvAsset:(id)a0 source:(id)a1;
- (id)sidecars;

@end

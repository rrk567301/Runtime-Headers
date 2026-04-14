@class NSString;

@interface PHImportAvchdAsset : PHImportAsset {
    NSString *_fileName;
    NSString *_clipIndex;
    id _avchdAssetId;
}

+ (void)avchdAssetsFromSource:(id)a0 completion:(id /* block */)a1;
+ (void)checkForAVCHDContentAtURL:(id)a0 subURLs:(id)a1 completion:(id /* block */)a2;

- (unsigned long long)fileSize;
- (BOOL)isSloMo;
- (id)fileExtension;
- (BOOL)isTimelapse;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)creationDate;
- (id)fileCreationDate;
- (id)fileName;
- (BOOL)isAVCHD;
- (id)avchdAssetId;
- (BOOL)canReference;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAvAsset:(id)a0 source:(id)a1;
- (id)sidecars;

@end

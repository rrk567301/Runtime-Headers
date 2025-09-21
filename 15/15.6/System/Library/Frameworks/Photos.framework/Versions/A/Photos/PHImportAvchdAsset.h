@class NSString;

@interface PHImportAvchdAsset : PHImportAsset {
    NSString *_fileName;
    NSString *_clipIndex;
    id _avchdAssetId;
}

+ (void)avchdAssetsFromSource:(id)a0 completion:(id /* block */)a1;
+ (void)checkForAVCHDContentAtURL:(id)a0 subURLs:(id)a1 completion:(id /* block */)a2;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)fileExtension;
- (id)fileCreationDate;
- (id)fileName;
- (unsigned long long)fileSize;
- (id)creationDate;
- (char)isSloMo;
- (char)isAVCHD;
- (id)avchdAssetId;
- (char)canReference;
- (void)copyToURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithAvAsset:(id)a0 source:(id)a1;
- (char)isTimelapse;
- (id)sidecars;

@end

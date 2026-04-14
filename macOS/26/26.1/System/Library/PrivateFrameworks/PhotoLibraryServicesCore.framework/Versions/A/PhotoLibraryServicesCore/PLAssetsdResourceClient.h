@protocol PLAssetJobExecutor;

@interface PLAssetsdResourceClient : PLAssetsdBaseClient {
    id<PLAssetJobExecutor> _creationRequestBridge;
}

- (BOOL)fileURLForAssetURL:(id)a0 withAdjustments:(BOOL)a1 fileURL:(id *)a2 error:(id *)a3;
- (BOOL)updateInternalResourcePath:(id)a0 objectURI:(id)a1 error:(id *)a2;
- (BOOL)fileDescriptorForAssetURL:(id)a0 withAdjustments:(BOOL)a1 fileExtension:(id *)a2 fileDescriptor:(int *)a3 error:(id *)a4;
- (BOOL)sandboxExtensionFileURLForAssetURL:(id)a0 withAdjustments:(BOOL)a1 fileURL:(id *)a2 error:(id *)a3;
- (BOOL)sandboxExtensionsForAssetWithUUID:(id)a0 sandboxExtensionTokens:(id *)a1 error:(id *)a2;
- (void)addGroupWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveAssetWithJobDictionary:(id)a0 imageSurface:(struct __IOSurface { } *)a1 previewImageSurface:(struct __IOSurface { } *)a2 completionHandler:(id /* block */)a3;
- (id)initWithQueue:(id)a0 proxyCreating:(id)a1 proxyGetter:(SEL)a2 clientState:(id)a3;
- (void)downloadCloudSharedAsset:(id)a0 withCloudPlaceholderKind:(unsigned long long)a1 shouldPrioritize:(BOOL)a2 shouldExtendTimer:(BOOL)a3 completionHandler:(id /* block */)a4;
- (id)consolidateAssets:(id)a0 completionHandler:(id /* block */)a1;
- (void)adjustmentDataForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 trackCPLDownload:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)addAssetWithURL:(id)a0 toAlbumWithUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)estimatedOutputFileLengthForVideoURL:(id)a0 fallbackFilePath:(id)a1 exportPreset:(id)a2 exportProperties:(id)a3 outFileLength:(long long *)a4 error:(id *)a5;
- (BOOL)imageDataForAsset:(id)a0 format:(int)a1 allowPlaceholder:(BOOL)a2 wantURLOnly:(BOOL)a3 networkAccessAllowed:(BOOL)a4 trackCPLDownload:(BOOL)a5 outImageData:(id *)a6 outImageDataInfo:(id *)a7 outCPLDownloadContext:(id *)a8 error:(id *)a9;
- (void)imageDataForAsset:(id)a0 format:(int)a1 allowPlaceholder:(BOOL)a2 wantURLOnly:(BOOL)a3 networkAccessAllowed:(BOOL)a4 trackCPLDownload:(BOOL)a5 completionHandler:(id /* block */)a6;
- (id)projectExtensionDataForProjectUuid:(id)a0;
- (BOOL)sandboxExtensionForFileSystemBookmark:(id)a0 bookmarkURL:(id *)a1 sandboxExtensionToken:(id *)a2 error:(id *)a3;

@end

@protocol PLAssetJobExecutor;

@interface PLAssetsdResourceClient : PLAssetsdBaseClient {
    id<PLAssetJobExecutor> _creationRequestBridge;
}

- (void).cxx_destruct;
- (void)adjustmentDataForAsset:(id)a0 networkAccessAllowed:(char)a1 trackCPLDownload:(char)a2 completionHandler:(id /* block */)a3;
- (id)consolidateAssets:(id)a0 completionHandler:(id /* block */)a1;
- (id)projectExtensionDataForProjectUuid:(id)a0;
- (char)updateInternalResourcePath:(id)a0 objectURI:(id)a1 error:(id *)a2;
- (char)sandboxExtensionsForAssetWithUUID:(id)a0 sandboxExtensionTokens:(id *)a1 error:(id *)a2;
- (void)imageDataForAsset:(id)a0 format:(int)a1 allowPlaceholder:(char)a2 wantURLOnly:(char)a3 networkAccessAllowed:(char)a4 trackCPLDownload:(char)a5 completionHandler:(id /* block */)a6;
- (char)imageDataForAsset:(id)a0 format:(int)a1 allowPlaceholder:(char)a2 wantURLOnly:(char)a3 networkAccessAllowed:(char)a4 trackCPLDownload:(char)a5 outImageData:(id *)a6 outImageDataInfo:(id *)a7 outCPLDownloadContext:(id *)a8 error:(id *)a9;
- (char)sandboxExtensionForFileSystemBookmark:(id)a0 bookmarkURL:(id *)a1 sandboxExtensionToken:(id *)a2 error:(id *)a3;
- (void)saveAssetWithJobDictionary:(id)a0 imageSurface:(struct __IOSurface { } *)a1 previewImageSurface:(struct __IOSurface { } *)a2 completionHandler:(id /* block */)a3;
- (void)addAssetWithURL:(id)a0 toAlbumWithUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)addGroupWithName:(id)a0 completionHandler:(id /* block */)a1;
- (void)downloadCloudSharedAsset:(id)a0 withCloudPlaceholderKind:(unsigned long long)a1 shouldPrioritize:(char)a2 shouldExtendTimer:(char)a3 completionHandler:(id /* block */)a4;
- (char)estimatedOutputFileLengthForVideoURL:(id)a0 fallbackFilePath:(id)a1 exportPreset:(id)a2 exportProperties:(id)a3 outFileLength:(long long *)a4 error:(id *)a5;
- (char)fileDescriptorForAssetURL:(id)a0 withAdjustments:(char)a1 fileExtension:(id *)a2 fileDescriptor:(int *)a3 error:(id *)a4;
- (char)fileURLForAssetURL:(id)a0 withAdjustments:(char)a1 fileURL:(id *)a2 error:(id *)a3;
- (id)initWithQueue:(id)a0 proxyCreating:(id)a1 proxyGetter:(SEL)a2 clientState:(id)a3;
- (char)sandboxExtensionFileURLForAssetURL:(id)a0 withAdjustments:(char)a1 fileURL:(id *)a2 error:(id *)a3;

@end

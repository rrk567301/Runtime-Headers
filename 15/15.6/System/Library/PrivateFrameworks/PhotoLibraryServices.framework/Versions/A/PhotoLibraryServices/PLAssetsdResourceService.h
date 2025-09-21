@class NSString, PLAssetsdCPLResourceDownloader, NSObject;
@protocol OS_dispatch_queue;

@interface PLAssetsdResourceService : PLAssetsdResourceWriteOnlyService <PLAssetsdResourceServiceProtocol> {
    NSObject<OS_dispatch_queue> *_asyncImageDataQueue;
    PLAssetsdCPLResourceDownloader *_resourceDownloader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)_allowSandboxExtensionForSessionIdentifier:(id)a0 captureSessionState:(id)a1;
- (char)_allowSandboxExtensionForAsset:(id)a0;
- (char)_consolidateResource:(id)a0 assetUUID:(id)a1 bundleScope:(unsigned short)a2 error:(id *)a3;
- (id)_typeFromPathConstrainedToImageOrMovie:(id)a0;
- (void)addAssetGroupWithName:(id)a0 reply:(id /* block */)a1;
- (void)addAssetWithURL:(id)a0 toAlbum:(id)a1 reply:(id /* block */)a2;
- (void)asynchronousAdjustmentDataForAsset:(id)a0 networkAccessAllowed:(char)a1 reply:(id /* block */)a2;
- (id)consolidateAssets:(id)a0 reply:(id /* block */)a1;
- (void)downloadCloudSharedAsset:(id)a0 wantedPlaceholderkind:(short)a1 shouldPrioritize:(char)a2 shouldExtendTimer:(char)a3 reply:(id /* block */)a4;
- (void)estimatedFileLengthOfVideo:(id)a0 fallbackFilePath:(id)a1 exportPreset:(id)a2 exportProperties:(id)a3 reply:(id /* block */)a4;
- (void)fileDescriptorForPersistentURL:(id)a0 withAdjustments:(char)a1 reply:(id /* block */)a2;
- (void)filePathForPersistentURL:(id)a0 withAdjustments:(char)a1 reply:(id /* block */)a2;
- (void)getSandboxExtensionForFileSystemBookmark:(id)a0 reply:(id /* block */)a1;
- (void)getSandboxExtensionsForAssetWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)imageDataForAssetWithObjectURI:(id)a0 formatID:(unsigned short)a1 allowPlaceholder:(char)a2 wantURLOnly:(char)a3 networkAccessAllowed:(char)a4 trackCPLDownload:(char)a5 reply:(id /* block */)a6;
- (id)initWithLibraryServicesManager:(id)a0 connectionAuthorization:(id)a1 resourceDownloader:(id)a2;
- (void)projectExtensionDataForProjectUuid:(id)a0 reply:(id /* block */)a1;
- (void)sandboxExtensionURLForPersistentURL:(id)a0 withAdjustments:(char)a1 reply:(id /* block */)a2;
- (void)saveAssetWithDataAndPorts:(id)a0 imageSurface:(id)a1 previewImageSurface:(id)a2 reply:(id /* block */)a3;
- (void)translatePersistentURL:(id)a0 withAdjustments:(char)a1 handler:(id /* block */)a2;
- (void)updateInternalResourcePath:(id)a0 objectURI:(id)a1 sandboxExtension:(id)a2 reply:(id /* block */)a3;

@end

@class NSString, PLLazyObject;

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudServiceProtocol> {
    PLLazyObject *_lazyResourceDownloader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)a0 doneTokens:(id)a1 format:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)computeStableHashesOfAssetWithObjectURI:(id)a0 synchronously:(char)a1 reply:(id /* block */)a2;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)a0 taskIdentifier:(id)a1 resourceType:(unsigned long long)a2 HighPriority:(char)a3 trackCPLDownload:(char)a4 downloadIsTransient:(char)a5 reply:(id /* block */)a6;
- (id)initWithLibraryServicesManager:(id)a0 lazyResourceDownloader:(id)a1;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)a0 mediaAssetType:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)resourceDownloader;

@end

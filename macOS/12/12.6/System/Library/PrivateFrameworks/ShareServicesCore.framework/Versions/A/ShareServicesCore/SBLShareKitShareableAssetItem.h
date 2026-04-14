@class PHAssetExportRequest, NSImage, NSURL, PHResourceLocalAvailabilityRequest, PHAsset;

@interface SBLShareKitShareableAssetItem : SBLShareKitShareableItem {
    NSImage *_placeholderImage;
}

@property (retain, nonatomic) NSURL *livePhotoBundleURL;
@property (retain, nonatomic) NSURL *alternateGIFAssetURL;
@property (readonly, nonatomic) NSURL *exportPath;
@property (retain, nonatomic) PHResourceLocalAvailabilityRequest *resourceLocalAvailabilityRequest;
@property (retain, nonatomic) PHAssetExportRequest *regularExportRequest;
@property (retain, nonatomic) PHAssetExportRequest *livePhotoExportRequest;
@property (retain, nonatomic) PHAssetExportRequest *alternateExportRequest;
@property (readonly, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL shouldStripLocation;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)placeholderImage;
- (BOOL)needsDownload;
- (void)download:(id /* block */)a0;
- (void)prepare:(id /* block */)a0;
- (id)initWithSessionGroup:(id)a0 workerQueue:(id)a1 replyQueue:(id)a2;
- (id)exportWithCompletionHandler:(id /* block */)a0;
- (id)exportHintPath;
- (BOOL)canProvideMovie;
- (void)cleanupRequests;
- (void)cleanupFiles;
- (void)cancelRequestsInProgress;
- (BOOL)canProvideImage;
- (id)_exportLivePhotoWithCompletionHandler:(id /* block */)a0;
- (id)_exportAssetWithCompletionHandler:(id /* block */)a0;
- (id)_exportVideoAssetWithCompletionHandler:(id /* block */)a0;
- (BOOL)_canExportAlternateAsset;
- (id)_exportAlternateAssetWithCompletionHandler:(id /* block */)a0;
- (id)_defaultExportRequestOptions;
- (void)_handleAssetURLWithFileURLs:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_handleLivePhotoBundleWithFileURLs:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)_handleAlternateAssetURLWithFileURLs:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAsset:(id)a0 sessionGroup:(id)a1 workerQueue:(id)a2 replyQueue:(id)a3;
- (void)_handleVideoAssetURL:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;

@end

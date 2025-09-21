@class VUIMediaEntityAssetControllerState, VUIVideosPlayable, VUIContentRating, TVDownloadManagerProvider, NSString, NSObject, VUIDownloadItem;
@protocol OS_dispatch_queue;

@interface VUIDownloadAssetController : NSObject <VUIMediaEntityAssetController, TVDownloadManagerObserver>

@property (retain, nonatomic) TVDownloadManagerProvider *downloadController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (retain, nonatomic) VUIVideosPlayable *videosPlayable;
@property (retain, nonatomic) VUIDownloadItem *downloadItem;
@property (readonly, nonatomic) char supportsStartingDownload;
@property (readonly, nonatomic) char supportsRedownloadingContent;
@property (readonly, copy, nonatomic) VUIMediaEntityAssetControllerState *state;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (readonly, nonatomic) char contentAllowsCellularDownload;
@property (readonly, nonatomic) VUIContentRating *contentRating;
@property (readonly, nonatomic) NSString *brandID;
@property (readonly, nonatomic) NSString *brandName;
@property (readonly, nonatomic) char allowsManualDownloadRenewal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(unsigned long long)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)availabilityEndDate;
- (void)_notifyListenersStateDidChange:(id)a0;
- (id)convertToVUIMediaEntityAssetControllerStateFromTVDownloadState:(id)a0;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)a0;
- (void)_enqueueCompletionQueueBlock:(id /* block */)a0;
- (char)_isDownloadedOrDownloading;
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(id /* block */)a0;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(char)a0 quality:(long long)a1 completion:(id /* block */)a2;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 downloadProgress:(double)a1 bytesDownloaded:(unsigned long long)a2 bytesToDownload:(unsigned long long)a3 supportsPausing:(char)a4 supportsCancellation:(char)a5 notify:(char)a6;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 notify:(char)a1;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)a0 progress:(id)a1;
- (char)canRenewKeys;
- (void)cancelAndRemoveDownload;
- (void)cancelAndRemoveDownloadWithCompletion:(id /* block */)a0;
- (void)cancelKeyFetch;
- (void)deleteAndRedownloadAllowingCellular:(char)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(char)a2 completion:(id /* block */)a3;
- (id)downloadExpirationDate;
- (void)downloadManager:(id)a0 didAddDownloads:(id)a1;
- (void)downloadManager:(id)a0 downloadDidError:(id)a1 withError:(id)a2;
- (void)downloadManager:(id)a0 downloadDidFinish:(id)a1;
- (void)downloadManager:(id)a0 downloadDidProgress:(id)a1;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithVideosPlayable:(id)a0;
- (void)loadInitialDownloadState;
- (char)renewsOfflineKeysAutomatically;
- (void)startDownloadAllowingCellular:(char)a0 quality:(long long)a1 shouldMarkAsDeletedOnCancellationOrFailure:(char)a2 prefer3DOrImmersiveDownload:(char)a3 completion:(id /* block */)a4;

@end

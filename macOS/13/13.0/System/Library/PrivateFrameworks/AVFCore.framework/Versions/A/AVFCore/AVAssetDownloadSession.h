@class NSArray, AVAssetDownloadSessionInternal, NSURL, NSError, AVMediaSelection;

@interface AVAssetDownloadSession : NSObject {
    AVAssetDownloadSessionInternal *_internal;
}

@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *destinationURL;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) unsigned long long availableFileSize;
@property (readonly, nonatomic) unsigned long long countOfBytesReceived;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *loadedTimeRanges;
@property (readonly, nonatomic) AVMediaSelection *resolvedMediaSelection;

+ (void)registerDownloadLocation:(id)a0 forURLAsset:(id)a1;
+ (id)assetDownloadSessionWithAsset:(id)a0 mediaSelections:(id)a1 destinationURL:(id)a2 options:(id)a3;
+ (id)assetDownloadSessionWithURL:(id)a0 destinationURL:(id)a1 options:(id)a2;
+ (id)assetDownloadSessionWithDownloadToken:(unsigned long long)a0;
+ (id)assetDownloadSessionWithAsset:(id)a0 destinationURL:(id)a1 options:(id)a2;

- (void)dealloc;
- (id)init;
- (void)pause;
- (void)start;
- (void)stop;
- (id)_weakReference;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (struct OpaqueFigAsset { } *)_figAsset;
- (struct OpaqueFigPlaybackItem { } *)_playbackItem;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { } *)a0 key:(struct __CFString { } *)a1;
- (id)_common_init;
- (void)_addFigPlaybackItemListeners;
- (void)_removeFigPlaybackItemListeners;
- (id)initWithURL:(id)a0 destinationURL:(id)a1 options:(id)a2;
- (id)initWithDownloadToken:(unsigned long long)a0;
- (id)initWithAsset:(id)a0 mediaSelections:(id)a1 destinationURL:(id)a2 options:(id)a3;
- (void)startLoadingMetadata;
- (void)_sendDownloadSuccessToDelegate;
- (void)_sendDownloadFailureToDelegateWithError:(id)a0;
- (void)_sendLoadedTimeRangesChangedToDelegateWithNewlyLoadedTimeRange:(id)a0 currentLoadedTimeRanges:(id)a1 timeRangeExpectedToLoad:(id)a2 selectedMediaArray:(id)a3;
- (void)_sendDidResolveMediaSelectionWithMediaSelection:(id)a0;
- (void)_sendDidFinishDownloadForMediaSelectionWithMediaSelection:(id)a0;
- (void)_sendProgessUpdateWithExpectedBytesToDownload:(unsigned long long)a0 bytesDownloaded:(unsigned long long)a1;
- (void)_sendWillDownloadVariants:(id)a0;
- (void)_downloadSuccessCallback;
- (void)_downloadFailureCallbackWithError:(id)a0;
- (BOOL)startProgressTimerOnQueueWithError:(id *)a0;
- (void)cancelAndReleaseProgressTimerOnQueue;
- (id)_setupFigClientObjectForFileDownload:(id)a0;
- (id)_setupFigClientObjectForStreaming:(id)a0;
- (void)_setupFigClientObjectAsync:(id)a0;
- (int)_setFileFigAsset:(struct OpaqueFigAsset { } *)a0;
- (void)_startLoadingMetadataOnQueue;
- (id)_startOnQueueFirstTime;
- (id)_startOnQueue;
- (void)_transitionToTerminalStatus:(long long)a0 error:(id)a1;
- (void)_primeCacheOnDispatchQueue;
- (int)_primeCache;
- (int)_readyForInspection;
- (id)_verifyDownloadConfigurationForAssetType;
- (struct OpaqueFigAsset { } *)_createDuplicateFigAssetFromAVAsset:(id)a0;
- (id)_errorFromAssetNotificationPayload:(id)a0;
- (id)_figAssetNotificationNames;
- (void)_addFigAssetListeners;
- (void)_removeFigAssetListeners;
- (id)_figPlaybackItemNotificationNames;

@end

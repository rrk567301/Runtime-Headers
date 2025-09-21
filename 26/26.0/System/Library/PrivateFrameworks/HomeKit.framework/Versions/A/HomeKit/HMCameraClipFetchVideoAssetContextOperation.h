@class HMCameraClip, NSURL, HMCameraClipManager;
@protocol HMCameraClipFetchAssetContextOperationDataSource;

@interface HMCameraClipFetchVideoAssetContextOperation : HMFOperation

@property (readonly) id<HMCameraClipFetchAssetContextOperationDataSource> dataSource;
@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) HMCameraClip *clip;
@property struct _NSRange { unsigned long long location; unsigned long long length; } videoDataSegmentsRange;
@property unsigned long long videoSegmentsDownloadBatchSize;
@property (copy) NSURL *clipDestinationFileURL;
@property (copy) NSURL *hlsPlaylistDestinationFileURL;
@property (copy) id /* block */ downloadProgressHandler;
@property (copy) id /* block */ fetchVideoAssetContextCompletionBlock;

+ (id)logCategory;

- (void)main;
- (void)cancelWithError:(id)a0;
- (id)description;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)decryptData:(id)a0;
- (id)downloadVideoAssetForContext:(id)a0;
- (id)downloadVideoSegments:(id)a0 forDataTask:(id)a1 andAppendToOutputStream:(id)a2;
- (id)fetchVideoAssetContext;
- (void)finishWithVideoAssetContext:(id)a0;
- (id)initWithClipManager:(id)a0 clip:(id)a1;
- (id)initWithClipManager:(id)a0 clip:(id)a1 dataSource:(id)a2;
- (void)updateDownloadProgressToPercentageComplete:(unsigned long long)a0;
- (id)videoSegmentsToDownloadForContext:(id)a0;
- (id)writeHLSPlaylistForVideoAssetContext:(id)a0;

@end

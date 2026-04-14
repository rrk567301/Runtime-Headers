@interface VUIDownloadButtonViewModelTempV2 : VUIDownloadButtonViewModel

- (void)pauseDownload;
- (void)resumeDownload;
- (void)deleteDownload;
- (void)fetchNewKeysForDownloadedVideo;
- (id)initWithVideosPlayable:(id)a0;
- (void)preflightPresentingViewController:(id)a0 completion:(id /* block */)a1;
- (void)startDownloadAllowingCellular:(BOOL)a0 shouldMarkAsDeletedOnCancellationOrFailure:(BOOL)a1 quality:(long long)a2 prefer3DOrImmersiveDownload:(BOOL)a3;
- (void)stopDownload;

@end

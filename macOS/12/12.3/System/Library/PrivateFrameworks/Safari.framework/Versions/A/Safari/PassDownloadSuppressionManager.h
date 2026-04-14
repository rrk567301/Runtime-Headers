@interface PassDownloadSuppressionManager : DisruptiveUISuppressionManager

@property (readonly, nonatomic) BOOL isRequestQueueIsFull;

- (void)reset;
- (void)showQueuedPassFromDownload:(id)a0;
- (void)handleNextPassDownload;
- (void)enqueuePassDownload:(id)a0;
- (id)_dequeuePassDownloadRequest;

@end

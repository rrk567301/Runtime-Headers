@class NSProgress, BEURLWithBookmark, NSError, NSURL;

@interface BEDownloadProgress : BEDownloadMonitor

@property (nonatomic, readonly) NSProgress *progress;

- (void)begin:(void (^)(BEURLWithBookmark *, NSError *))a0;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 observedProgress:(id)a2 liveActivityAccessToken:(id)a3;
- (id)initWithSourceURL:(id)a0 destinationURL:(id)a1 progress:(id)a2 liveActivityAccessToken:(id)a3;
- (void)resumeWithCompletionHandler:(NSURL *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)setUsePlaceholder:(BOOL)a0 type:(id)a1 fileCreatedHandler:(id /* block */)a2;

@end

@class MiroMemory;

@interface MiroDownloadSongOperation : NSOperation {
    BOOL _isFinished;
    BOOL _isExecuting;
}

@property (retain) MiroMemory *memory;

- (void).cxx_destruct;
- (void)start;
- (void)finished;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)isAsynchronous;
- (void)downloadSong;
- (void)markSongAsUsed;

@end

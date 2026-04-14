@class NSMutableArray, NSMutableDictionary;

@interface PKDownloaderQueue : NSObject {
    unsigned long long _maxConcurrentDownloadCount;
    NSMutableArray *_queue;
    NSMutableDictionary *_active;
    unsigned long long _totalSizeQueued;
    unsigned long long _sizeDequeued;
    unsigned long long _sizeDownloaded;
    unsigned long long _sizeToDownload;
    unsigned long long _sizeToCheck;
    unsigned long long _dequeuedProgressIncrement;
    double _progressDerating;
    double _progressPercentage;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (BOOL)isEmpty;
- (void)addElement:(id)a0;
- (void)setMaxConcurrentDownloadCount:(long long)a0;
- (double)progressPercentage;
- (id)allElements;
- (long long)maxConcurrentDownloadCount;
- (id)activeElements;
- (id)activateNextElement;
- (id)activeElementForURL:(id)a0;
- (unsigned long long)totalSizeQueued;
- (unsigned long long)sizeDownloaded;
- (unsigned long long)sizeToDownload;
- (unsigned long long)sizeToCheck;
- (void)removeElement:(id)a0 didFinish:(BOOL)a1;
- (void)revertElement:(id)a0 keepActive:(BOOL)a1;
- (void)deactivateElement:(id)a0;
- (void)clearAll;
- (void)gotDataOfLength:(unsigned long long)a0 forElement:(id)a1;
- (void)checkedDataOfLength:(unsigned long long)a0 forElement:(id)a1;
- (void)updateProgressInfo;
- (void)_adjustQueueSizeBy:(long long)a0;

@end

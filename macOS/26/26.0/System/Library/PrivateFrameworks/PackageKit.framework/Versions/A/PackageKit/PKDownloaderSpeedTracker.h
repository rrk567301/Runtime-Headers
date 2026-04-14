@class NSDate;

@interface PKDownloaderSpeedTracker : NSObject {
    unsigned long long _averageBytesPerSecond;
    NSDate *_queueStartTime;
    unsigned long long _bytesSinceQueueStart;
    unsigned long long _bytesAtLastUpdate;
}

- (void)dealloc;
- (id)init;
- (id)description;
- (unsigned long long)averageBytesPerSecond;
- (void)didGetBytes:(unsigned long long)a0;
- (void)setAverageBytesPerSecond:(unsigned long long)a0;
- (void)updateSpeed;

@end

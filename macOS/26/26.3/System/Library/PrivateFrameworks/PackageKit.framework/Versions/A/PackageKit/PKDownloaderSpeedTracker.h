@class NSDate;

@interface PKDownloaderSpeedTracker : NSObject {
    unsigned long long _averageBytesPerSecond;
    NSDate *_queueStartTime;
    unsigned long long _bytesSinceQueueStart;
    unsigned long long _bytesAtLastUpdate;
}

- (id)description;
- (id)init;
- (void)dealloc;
- (unsigned long long)averageBytesPerSecond;
- (void)didGetBytes:(unsigned long long)a0;
- (void)setAverageBytesPerSecond:(unsigned long long)a0;
- (void)updateSpeed;

@end

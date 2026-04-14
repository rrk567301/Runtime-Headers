@interface IMDMessageFromStorageMonitor : NSObject {
    void /* unknown type, empty encoding */ messageCount;
    void /* unknown type, empty encoding */ totalElapsedTimeSec;
}

@property (class, nonatomic, readonly) IMDMessageFromStorageMonitor *sharedStorageMonitor;

- (void).cxx_destruct;
- (id)init;
- (void)incomingMessageProcessedWithElapsedTime:(double)a0;
- (void)showTapToRadarOnSlowDelivery;

@end

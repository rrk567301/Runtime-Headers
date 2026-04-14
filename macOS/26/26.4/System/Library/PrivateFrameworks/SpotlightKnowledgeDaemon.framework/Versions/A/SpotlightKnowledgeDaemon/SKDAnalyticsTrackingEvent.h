@class NSMutableArray;

@interface SKDAnalyticsTrackingEvent : SKDTrackingEvent {
    double _startTime;
    unsigned long long _batchCount;
    unsigned long long _completedCount;
    unsigned long long _errorCount;
    NSMutableArray *_logs;
}

- (id)logs;
- (void).cxx_destruct;
- (void)logEvent:(id)a0;
- (BOOL)supportedEvent:(id)a0;
- (id)initWithName:(id)a0 event:(id)a1 domain:(id)a2;

@end

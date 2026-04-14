@class SKDLog;
@protocol SKDTrackingEvent;

@interface SKDPipelineTrackingEvent : SKDTrackingEvent {
    SKDLog *_log;
    unsigned long long _spid;
    double _startTime;
    id<SKDTrackingEvent> _analyticsTracker;
}

@property (readonly, nonatomic) id<SKDTrackingEvent> analyticsTracker;

- (void)begin;
- (void)end;
- (void)logEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 event:(id)a1 domain:(id)a2;
- (void)setAnalyticsTracker:(id)a0;

@end

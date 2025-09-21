@class NSString;
@protocol SKDEventLogger;

@interface SKDPipelineLogger : SKDEventLogger {
    NSString *_domain;
    id<SKDEventLogger> _powerLogger;
    id<SKDEventLogger> _analyticsLogger;
}

@property (readonly, nonatomic) id<SKDEventLogger> powerLogger;
@property (readonly, nonatomic) id<SKDEventLogger> analyticsLogger;

- (id)initWithDomain:(id)a0;
- (void)flush;
- (void)logEvent:(id)a0;
- (void).cxx_destruct;
- (void)setAnalyticsLogger:(id)a0;
- (void)logEvent:(id)a0 level:(unsigned long long)a1;
- (void)setPowerLogger:(id)a0;
- (void)_logLevelDidChange;
- (id)trackingEventBeginWithName:(id)a0 event:(id)a1;
- (void)trackingEventEnd:(id)a0;

@end

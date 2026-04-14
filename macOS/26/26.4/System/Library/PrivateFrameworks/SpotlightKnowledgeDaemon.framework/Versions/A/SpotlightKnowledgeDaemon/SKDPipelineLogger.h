@class NSString, SKDPipelineState;
@protocol SKDEventLogger;

@interface SKDPipelineLogger : SKDEventLogger {
    NSString *_domain;
    SKDPipelineState *_pipelineState;
}

@property (readonly, nonatomic) id<SKDEventLogger> powerLogger;
@property (readonly, nonatomic) id<SKDEventLogger> analyticsLogger;

- (void)flush;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;
- (void)logEvent:(id)a0;
- (void)logEvent:(id)a0 level:(unsigned long long)a1;
- (void)_logLevelDidChange;
- (id)initWithDomain:(id)a0 powerLogger:(id)a1 analyticsLogger:(id)a2 pipelineState:(id)a3;
- (id)trackingEventBeginWithName:(id)a0 event:(id)a1;
- (void)trackingEventEnd:(id)a0;

@end

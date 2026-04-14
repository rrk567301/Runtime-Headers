@class SKDPipelineState;

@interface SKDStateLogger : SKDEventLogger {
    SKDPipelineState *_pipelineState;
}

- (void).cxx_destruct;
- (void)logEvent:(id)a0;
- (id)initWithPipelineState:(id)a0;
- (void)logEvent:(id)a0 level:(unsigned long long)a1;
- (BOOL)supportedEvent:(id)a0;

@end

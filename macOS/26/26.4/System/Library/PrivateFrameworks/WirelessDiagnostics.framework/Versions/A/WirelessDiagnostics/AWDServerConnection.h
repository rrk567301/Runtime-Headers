@interface AWDServerConnection : NSObject {
    void *fServerConnection;
}

- (BOOL)registerQueriableMetric:(unsigned int)a0 callback:(id /* block */)a1;
- (BOOL)submitMetric:(id)a0;
- (BOOL)registerConfigChangeCallback:(id /* block */)a0;
- (void)registerComponentParametersChangeCallback:(id /* block */)a0;
- (id)newMetricContainerWithIdentifier:(unsigned int)a0;
- (void)flushToQueue:(struct dispatch_queue_s { } *)a0 block:(id /* block */)a1;
- (BOOL)registerQueriableMetricCallback:(id /* block */)a0 forIdentifier:(unsigned int)a1;
- (id)initWithComponentId:(unsigned int)a0;
- (id)initWithComponentId:(unsigned int)a0 andBlockOnConfiguration:(BOOL)a1;
- (id)getComponentConfigurationParameters;
- (void)dealloc;
- (unsigned long long)getAWDTimestamp;

@end

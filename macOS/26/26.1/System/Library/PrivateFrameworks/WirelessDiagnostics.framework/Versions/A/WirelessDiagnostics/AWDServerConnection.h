@interface AWDServerConnection : NSObject {
    void *fServerConnection;
}

- (unsigned long long)getAWDTimestamp;
- (BOOL)registerQueriableMetric:(unsigned int)a0 callback:(id /* block */)a1;
- (id)initWithComponentId:(unsigned int)a0;
- (BOOL)registerQueriableMetricCallback:(id /* block */)a0 forIdentifier:(unsigned int)a1;
- (void)registerComponentParametersChangeCallback:(id /* block */)a0;
- (BOOL)submitMetric:(id)a0;
- (void)dealloc;
- (void)flushToQueue:(struct dispatch_queue_s { } *)a0 block:(id /* block */)a1;
- (id)newMetricContainerWithIdentifier:(unsigned int)a0;
- (id)getComponentConfigurationParameters;
- (BOOL)registerConfigChangeCallback:(id /* block */)a0;
- (id)initWithComponentId:(unsigned int)a0 andBlockOnConfiguration:(BOOL)a1;

@end

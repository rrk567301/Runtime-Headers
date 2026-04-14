@interface AALoggingEventProcessor : NSObject <AAEventProcessorType> {
    void /* unknown type, empty encoding */ proxyEventProcessor;
}

- (id)initWithFormat:(long long)a0;
- (void)processEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFormat:(long long)a0 subsystem:(id)a1;

@end

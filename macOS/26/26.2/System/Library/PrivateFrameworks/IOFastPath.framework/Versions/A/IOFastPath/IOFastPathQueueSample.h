@class IOFastPathConsumer;

@interface IOFastPathQueueSample : IOFastPathSampleBase {
    IOFastPathConsumer *client;
    unsigned long long generation;
}

+ (id)sampleWithClient:(id)a0;

- (void).cxx_destruct;
- (int)isValid;
- (id)initWithClient:(id)a0;
- (int)copyPayload:(id)a0;
- (int)getDoubleField:(unsigned int)a0 value:(double *)a1;
- (int)getIntegerField:(unsigned int)a0 value:(long long *)a1;
- (int)setDoubleField:(unsigned int)a0 value:(double)a1;
- (int)setIntegerField:(unsigned int)a0 value:(long long)a1;
- (void)setPayload:(const void *)a0 size:(unsigned long long)a1;

@end

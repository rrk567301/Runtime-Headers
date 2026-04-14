@class IOFastPathDescriptor;

@interface IOFastPathSampleBase : NSObject {
    IOFastPathDescriptor *descriptor;
    const void *buf;
    unsigned long long size;
}

+ (id)sampleWithDescriptor:(id)a0;

- (id)initWithDescriptor:(id)a0;
- (unsigned long long)_cfTypeID;
- (void).cxx_destruct;
- (int)copyPayload:(id)a0;
- (int)getDoubleField:(unsigned int)a0 value:(double *)a1;
- (void *)getField:(unsigned int)a0 ofType:(int)a1;
- (int)getIntegerField:(unsigned int)a0 value:(long long *)a1;
- (int)setDoubleField:(unsigned int)a0 value:(double)a1;
- (void)setField:(unsigned int)a0 ofType:(int)a1 buf:(void *)a2 len:(unsigned long long)a3;
- (int)setIntegerField:(unsigned int)a0 value:(long long)a1;
- (void)setPayload:(const void *)a0 size:(unsigned long long)a1;

@end

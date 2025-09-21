@class NSString;
@protocol MTLDevice;

@interface MTLCounterSampleBufferImpl : NSObject <MTLCounterSampleBuffer> {
    void *_pCounterSampleBuffer;
}

@property (readonly) id<MTLDevice> device;
@property (readonly) NSString *label;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveCounterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)getIGCounterSampleBuffer:(struct MTLIGCounterSampleBuffer **)a0;
- (id)initWithDescriptor:(id)a0 device:(id)a1 buffer:(void *)a2;

@end

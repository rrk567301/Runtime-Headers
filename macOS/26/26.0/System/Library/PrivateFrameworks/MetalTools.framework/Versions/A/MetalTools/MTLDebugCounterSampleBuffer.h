@class MTLCounterSampleBufferDescriptor;

@interface MTLDebugCounterSampleBuffer : MTLToolsCounterSampleBuffer

@property (readonly, nonatomic) MTLCounterSampleBufferDescriptor *descriptor;
@property (readonly, nonatomic) unsigned long long storageMode;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)description;
- (id)initWithCounterSampleBuffer:(id)a0 device:(id)a1 descriptor:(id)a2;
- (id)resolveCounterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end

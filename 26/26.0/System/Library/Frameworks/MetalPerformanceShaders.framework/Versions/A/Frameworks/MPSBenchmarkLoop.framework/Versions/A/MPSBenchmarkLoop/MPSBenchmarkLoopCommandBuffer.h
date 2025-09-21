@class MPSWorkloadInfoCapture;

@interface MPSBenchmarkLoopCommandBuffer : MPSCommandBuffer

@property (nonatomic) MPSWorkloadInfoCapture *currentWorkloadCapture;

- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (void)dealloc;
- (id)computeCommandEncoder;
- (id)initWithCommandBuffer:(id)a0;
- (id)blitCommandEncoder;

@end

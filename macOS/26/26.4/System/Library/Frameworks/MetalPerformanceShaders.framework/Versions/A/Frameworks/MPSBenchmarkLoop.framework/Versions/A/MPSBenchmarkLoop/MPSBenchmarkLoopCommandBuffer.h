@class MPSWorkloadInfoCapture;

@interface MPSBenchmarkLoopCommandBuffer : MPSCommandBuffer

@property (nonatomic) MPSWorkloadInfoCapture *currentWorkloadCapture;

- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (id)computeCommandEncoder;
- (id)initWithCommandBuffer:(id)a0;
- (void)dealloc;
- (id)blitCommandEncoder;

@end

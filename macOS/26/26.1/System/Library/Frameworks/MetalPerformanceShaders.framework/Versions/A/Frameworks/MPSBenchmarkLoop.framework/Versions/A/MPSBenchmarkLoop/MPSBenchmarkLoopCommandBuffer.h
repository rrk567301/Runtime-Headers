@class MPSWorkloadInfoCapture;

@interface MPSBenchmarkLoopCommandBuffer : MPSCommandBuffer

@property (nonatomic) MPSWorkloadInfoCapture *currentWorkloadCapture;

- (id)computeCommandEncoder;
- (void)dealloc;
- (id)computeCommandEncoderWithDispatchType:(unsigned long long)a0;
- (id)initWithCommandBuffer:(id)a0;
- (id)blitCommandEncoder;

@end

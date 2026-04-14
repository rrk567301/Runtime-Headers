@interface VCPCNNDataGPU : VCPCNNData

- (int)allocBuffers:(BOOL)a0;
- (int)reallocGPUTemporalBuffers;
- (int)bufferAllocGPU;
- (int)convertCPUData2GPU;
- (int)convertGPUData2CPU;

@end

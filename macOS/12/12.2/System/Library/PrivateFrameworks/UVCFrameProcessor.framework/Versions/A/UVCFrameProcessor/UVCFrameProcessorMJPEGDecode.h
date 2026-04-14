@interface UVCFrameProcessorMJPEGDecode : UVCFrameProcessorDecode

- (id)initWithAttributes:(id)a0 destination:(id)a1 queue:(id)a2;
- (void)processStreamData:(id)a0 error:(id)a1 args:(id)a2;
- (BOOL)setupDecompressionSession:(id *)a0;

@end

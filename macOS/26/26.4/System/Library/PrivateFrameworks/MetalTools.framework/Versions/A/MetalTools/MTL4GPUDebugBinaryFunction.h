@class MTLGPUDebugImageData;

@interface MTL4GPUDebugBinaryFunction : MTL4ToolsBinaryFunction {
    MTLGPUDebugImageData *data;
}

- (void)dealloc;
- (void)initImageData:(id)a0;

@end

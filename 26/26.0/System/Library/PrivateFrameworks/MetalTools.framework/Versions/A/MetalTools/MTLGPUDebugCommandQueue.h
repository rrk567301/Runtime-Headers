@class NSString;

@interface MTLGPUDebugCommandQueue : MTLToolsCommandQueue {
    struct GPUDebugDeviceOptions { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } *_deviceOptions;
}

@property (readonly, nonatomic) NSString *tracePath;

- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithDescriptor:(id)a0;
- (id)commandBuffer;
- (id)initWithCommandQueue:(id)a0 device:(id)a1;

@end

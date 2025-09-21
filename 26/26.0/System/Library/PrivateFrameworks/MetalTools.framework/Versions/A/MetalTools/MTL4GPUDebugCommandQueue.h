@class NSString, NSLock;

@interface MTL4GPUDebugCommandQueue : MTL4ToolsCommandQueue {
    struct GPUDebugDeviceOptions { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } *_deviceOptions;
    NSLock *_commitMutex;
}

@property (readonly, nonatomic) NSString *tracePath;

- (void)dealloc;
- (void)_checkReportBuffers:(id)a0 outputArray:(id)a1 encoderLabels:(const void *)a2;
- (void)_commit:(const id *)a0 count:(unsigned long long)a1 options:(id)a2;
- (void)_decodeReportLogState:(id)a0 outputArray:(id)a1 encoderLabels:(const void *)a2;
- (void)commit:(const id *)a0 count:(unsigned long long)a1;
- (void)commit:(const id *)a0 count:(unsigned long long)a1 options:(id)a2;
- (id)initWithCommandQueue:(id)a0 device:(id)a1;
- (id)setUpLogState:(unsigned long long)a0;

@end

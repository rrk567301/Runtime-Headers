@class NSLock;

@interface GTMutableShaderProfilerStreamData : GTShaderProfilerStreamData {
    NSLock *_addLock;
}

+ (id)dataFromArchivedDataURL:(id)a0;

- (unsigned long long)addString:(id)a0;
- (void)_commonInit;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNewFileFormatV2Support:(BOOL)a0;
- (id)_copyForAddAPSData:(id)a0 prefix:(id)a1;
- (BOOL)addAPSCounterData:(id)a0;
- (BOOL)addAPSData:(id)a0;
- (BOOL)addAPSTimelineData:(id)a0;
- (BOOL)addBatchIdFilteredCounterData:(id)a0;
- (void)addCommandBuffers:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; } *)a0 count:(unsigned long long)a1;
- (void)addEncoders:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0 count:(unsigned long long)a1;
- (void)addGPUCommands:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; int x6; } *)a0 count:(unsigned long long)a1;
- (BOOL)addGPUTimelineData:(id)a0;
- (void)addPipelinePerformanceStatisticsData:(id)a0;
- (void)addPipelineStates:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0 count:(unsigned long long)a1;
- (void)addShaderFunctionInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; char x7[8]; } *)a0 count:(unsigned long long)a1;
- (BOOL)addShaderProfilerData:(id)a0;
- (void)removeAPSCounterData;
- (void)removeAPSData;
- (void)removeAPSTimelineData;
- (void)setBatchIdFilterableCounters:(id)a0;
- (void)setDataSourceHasUnusedResources:(BOOL)a0 captureRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)setNumBlitCalls:(unsigned long long)a0;

@end

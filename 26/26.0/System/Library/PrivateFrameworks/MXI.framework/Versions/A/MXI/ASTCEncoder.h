@class NSMutableDictionary;
@protocol MTLComputePipelineState;

@interface ASTCEncoder : NSObject {
    id<MTLComputePipelineState> _pipelineWithBuffer;
    id<MTLComputePipelineState> _pipelineWithoutBuffer;
    struct { unsigned int width; unsigned int height; unsigned int collectStatistics; unsigned int fastThresholdCount; unsigned long long format; char *tex_function; char *buf_function; } _info;
    NSMutableDictionary *m_modesErrorsBuffer;
    NSMutableDictionary *m_modesCounterBuffer;
    NSMutableDictionary *m_modesList;
    NSMutableDictionary *m_errorsList;
    struct { unsigned int width; unsigned int height; unsigned int collectStatistics; unsigned int fastThresholdCount; unsigned long long format; char *tex_function; char *buf_function; } m_info;
    NSMutableDictionary *m_totalBlocks;
    float m_rankModesCountRatio;
    BOOL m_collectStatistics;
}

- (void).cxx_destruct;
- (void)encodeWithCommandBuffer:(id)a0 destTexture:(id)a1 destSlice:(unsigned long long)a2 destLevel:(unsigned long long)a3 srcTexture:(id)a4 srcSlice:(unsigned long long)a5 srcLevel:(unsigned long long)a6;
- (BOOL)finalizeStatistics:(const char *)a0 modesPath:(const char *)a1 errorsPath:(const char *)a2;
- (id)getModes;
- (id)getModesErrors;
- (id)initWithDevice:(id)a0 blockWidth:(unsigned int)a1 blockHeight:(unsigned int)a2 rankModesCountRatio:(float)a3 fastSkipThreshold:(unsigned int)a4 collectStatistics:(BOOL)a5 error:(id *)a6;

@end

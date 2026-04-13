@class NSArray, NSDictionary, NSData, MTLArgument;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {
    struct { unsigned char fragmentUsesDiscard : 1; unsigned char fragmentWritesSampleMask : 1; unsigned char fragmentWritesDepth : 1; unsigned char vertexRegisterSpill : 1; unsigned char fragmentRegisterSpill : 1; unsigned char fragmentReadsFramebufferValues : 1; unsigned char fragmentPunchThrough : 1; unsigned char vertexWritesPointSize : 1; unsigned char private2 : 1; unsigned long reserved : 55; } _flags;
    NSArray *_vertexBuiltInArguments;
    unsigned long long _postVertexDumpStride;
    NSArray *_postVertexDumpOutputs;
    NSArray *_inferredInputs;
    NSArray *_vertexArguments;
    NSArray *_fragmentArguments;
    NSArray *_tileArguments;
    NSArray *_tileBuiltInArguments;
    MTLArgument *_imageBlockDataReturn;
    NSDictionary *_performanceStatistics;
    unsigned int _traceBufferIndex;
    NSData *_vertexPluginReturnData;
    NSData *_fragmentPluginReturnData;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
    NSDictionary *_vertexResourceBindingIndexRemappingTable;
    NSDictionary *_fragmentResourceBindingIndexRemappingTable;
}

- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (unsigned int)traceBufferIndex;
- (id)initWithVertexData:(id)a0 fragmentData:(id)a1 serializedVertexDescriptor:(id)a2 device:(id)a3 options:(unsigned long long)a4 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned long x9 : 55; })a5;
- (id)performanceStatistics;
- (void)setPerformanceStatistics:(id)a0;
- (id)initWithTileData:(id)a0 functionType:(unsigned long long)a1 device:(id)a2 options:(unsigned long long)a3 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned long x9 : 55; })a4;
- (id)vertexArguments;
- (id)fragmentArguments;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned long x9 : 55; })usageFlags;
- (id)constantSamplerDescriptors;
- (id)tileArguments;
- (id)imageBlockDataReturn;
- (id)vertexBuiltInArguments;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setConstantSamplerUniqueIdentifiers:(id)a0;
- (void)setVertexResourceBindingIndexRemappingTable:(id)a0;
- (void)setFragmentResourceBindingIndexRemappingTable:(id)a0;
- (id)constantSamplerUniqueIdentifiers;
- (id)vertexPluginReturnData;
- (id)fragmentPluginReturnData;
- (id)vertexResourceBindingIndexRemappingTable;
- (id)fragmentResourceBindingIndexRemappingTable;
- (unsigned long long)postVertexDumpStride;
- (id)postVertexDumpOutputs;
- (id)inferredInputs;

@end

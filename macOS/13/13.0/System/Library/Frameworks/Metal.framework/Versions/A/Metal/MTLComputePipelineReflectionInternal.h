@class NSArray, NSDictionary, NSData;

@interface MTLComputePipelineReflectionInternal : MTLComputePipelineReflection {
    NSArray *_arguments;
    NSArray *_builtInArguments;
    NSDictionary *_performanceStatistics;
    struct { unsigned char kernelRegisterSpill : 1; unsigned char threadgroupBarrier : 1; unsigned char deviceMemoryAtomics : 1; unsigned char threadgroupMemoryAtomics : 1; unsigned long reserved : 60; } _flags;
    unsigned int _traceBufferIndex;
    NSData *_pluginReturnData;
    NSArray *_constantSamplerUniqueIdentifiers;
    NSArray *_constantSamplerDescriptors;
    NSDictionary *_computeResourceBindingIndexRemappingTable;
    NSArray *_bindings;
}

- (void)dealloc;
- (id)description;
- (struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned long x4 : 60; })usageFlags;
- (void)setPerformanceStatistics:(id)a0;
- (id)constantSamplerDescriptors;
- (id)initWithSerializedData:(id)a0 serializedStageInputDescriptor:(id)a1 device:(id)a2 options:(unsigned long long)a3 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned long x4 : 60; })a4;
- (id)performanceStatistics;
- (id)builtInArguments;
- (id)formattedDescription:(unsigned long long)a0;
- (id)arguments;
- (id)pluginReturnData;
- (id)bindings;
- (id)initWithSerializedData:(id)a0 device:(id)a1 options:(unsigned long long)a2 flags:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned long x4 : 60; })a3;
- (unsigned int)traceBufferIndex;
- (id)constantSamplerUniqueIdentifiers;
- (void)setConstantSamplerUniqueIdentifiers:(id)a0;
- (void)setConstantSamplerDescriptorsFromBitmasks:(unsigned long long *)a0 count:(unsigned long long)a1;
- (id)computeResourceBindingIndexRemappingTable;
- (void)setComputeResourceBindingIndexRemappingTable:(id)a0;

@end

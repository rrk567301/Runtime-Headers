@class NSDictionary, MTLShaderValidationConfiguration;

@interface MTL4PipelineOptions : NSObject <NSCopying>

@property (retain) NSDictionary *pluginData;
@property (readonly) MTLShaderValidationConfiguration *shaderValidationConfig;
@property BOOL enablePerformanceStatistics;
@property BOOL enablePostVertexDump;
@property BOOL enablePostMeshDump;
@property BOOL enableAccelerationStructureViewerInstrumentation;
@property BOOL enableResourcePatchingInstrumentation;
@property BOOL enableResourceUsageInstrumentation;
@property unsigned long long maxNumRegisters;
@property unsigned long long postVertexDumpBufferIndex;
@property (nonatomic) long long shaderValidation;
@property (nonatomic) unsigned long long shaderReflection;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end

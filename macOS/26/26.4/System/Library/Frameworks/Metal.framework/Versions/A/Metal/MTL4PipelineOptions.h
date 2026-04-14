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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;

@end

@class NSString, MTLStageInputOutputDescriptor, MTLPipelineBufferDescriptorArray, NSArray, MTLLinkedFunctions;
@protocol MTLFunction;

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>

@property (nonatomic) char forceResourceIndex;
@property (nonatomic) unsigned long long resourceIndex;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id<MTLFunction> computeFunction;
@property (nonatomic) char threadGroupSizeIsMultipleOfThreadExecutionWidth;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (copy, nonatomic) MTLStageInputOutputDescriptor *stageInputDescriptor;
@property (readonly) MTLPipelineBufferDescriptorArray *buffers;
@property (nonatomic) char supportIndirectCommandBuffers;
@property (copy, nonatomic) NSArray *insertLibraries;
@property (copy, nonatomic) NSArray *preloadedLibraries;
@property (copy, nonatomic) NSArray *binaryArchives;
@property (copy, nonatomic) MTLLinkedFunctions *linkedFunctions;
@property (nonatomic) char supportAddingBinaryFunctions;
@property (nonatomic) unsigned long long maxCallStackDepth;
@property (nonatomic) long long shaderValidation;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end

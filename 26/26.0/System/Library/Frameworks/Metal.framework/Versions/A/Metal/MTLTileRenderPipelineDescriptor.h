@class NSString, NSArray, MTLPipelineBufferDescriptorArray, MTLLinkedFunctions, MTLTileRenderPipelineColorAttachmentDescriptorArray;
@protocol MTLFunction;

@interface MTLTileRenderPipelineDescriptor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) id<MTLFunction> tileFunction;
@property (nonatomic) unsigned long long rasterSampleCount;
@property (readonly) MTLTileRenderPipelineColorAttachmentDescriptorArray *colorAttachments;
@property (nonatomic) BOOL threadgroupSizeMatchesTileSize;
@property (readonly) MTLPipelineBufferDescriptorArray *tileBuffers;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;
@property (copy, nonatomic) NSArray *binaryArchives;
@property (copy, nonatomic) NSArray *preloadedLibraries;
@property (copy, nonatomic) MTLLinkedFunctions *linkedFunctions;
@property (nonatomic) BOOL supportAddingBinaryFunctions;
@property (nonatomic) unsigned long long maxCallStackDepth;
@property (nonatomic) long long shaderValidation;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } requiredThreadsPerThreadgroup;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end

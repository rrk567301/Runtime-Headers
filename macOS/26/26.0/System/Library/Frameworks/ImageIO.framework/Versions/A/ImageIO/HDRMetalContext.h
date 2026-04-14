@protocol MTLDevice, MTLBinaryArchive, MTLLibrary, MTLCommandQueue;

@interface HDRMetalContext : NSObject

@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTLLibrary> library;
@property (readonly, nonatomic) id<MTLBinaryArchive> archive;
@property (readonly, nonatomic) id<MTLBinaryArchive> binaryArchive;
@property (readonly, nonatomic) struct __CVMetalTextureCache { } *textureCache;

+ (id)metalContext;
+ (id)selectMetalDevice;
+ (id)sharedMetalContext;
+ (BOOL)useSharedContext;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)flushTextureCache;
- (id)metalBinaryArchiveFileForHarvest;
- (id)metalComputePipelineStateWithFunction:(id)a0;
- (id)metalLibraryFunctionWithName:(id)a0;
- (id)metalLibraryFunctionWithName:(id)a0 functionConstant:(id)a1;
- (unsigned long long)metalPixelFormatForPixelFormat:(unsigned int)a0 plane:(unsigned int)a1;
- (struct __CVBuffer { } *)metalTextureFromBuffer:(struct __CVBuffer { } *)a0 plane:(unsigned int)a1;
- (id)metalTextureFromCubeData:(id)a0;
- (id)metalTextureFromTableData:(id)a0;

@end

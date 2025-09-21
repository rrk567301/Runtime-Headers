@class NSArray, NSString, NSDictionary, NSMutableArray, MXIMaterialDescriptor;
@protocol MTLTexture, MTLBuffer;

@interface MXIScene : NSObject

@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) unsigned long long triangleCount;
@property (readonly, nonatomic) unsigned long long opaqueTriangleCount;
@property (readonly, nonatomic) id<MTLBuffer> vertexPositions;
@property (readonly, nonatomic) id<MTLBuffer> vertexUVs;
@property (readonly, nonatomic) id<MTLBuffer> triangleIndices;
@property (readonly, nonatomic) id<MTLBuffer> triangleSliceIndices;
@property (readonly, nonatomic) id<MTLTexture> colorTexture;
@property (readonly, nonatomic) NSArray *colorTextures;
@property (nonatomic) long long type;
@property (nonatomic) float verticalFOV;
@property (nonatomic) float effectiveVerticalFOV;
@property (nonatomic) float aspectRatio;
@property (nonatomic) float effectiveAspectRatio;
@property (nonatomic) struct { float from; float to; } depthRange;
@property (nonatomic) int colorPrimaries;
@property (nonatomic) BOOL isPremultipliedAlpha;
@property (nonatomic) unsigned int resolutionWidth;
@property (nonatomic) unsigned int resolutionHeight;
@property (nonatomic) unsigned int numLayers;
@property (nonatomic) unsigned int numVertices;
@property (nonatomic) unsigned int numTriangles;
@property (nonatomic) unsigned int numOpaqueTriangles;
@property (nonatomic) unsigned int colorTextureSlices;
@property (retain, nonatomic) id<MTLBuffer> vertexPositions;
@property (retain, nonatomic) id<MTLBuffer> vertexUVs;
@property (retain, nonatomic) id<MTLBuffer> triangleSliceIndices;
@property (retain, nonatomic) id<MTLBuffer> triangleIndices;
@property (retain, nonatomic) id<MTLTexture> colorTexture;
@property (retain, nonatomic) NSArray *colorTextures;
@property (retain, nonatomic) id<MTLTexture> normalTexture;
@property (retain, nonatomic) NSMutableArray *pbrTextures;
@property (retain, nonatomic) MXIMaterialDescriptor *materialDescriptor;
@property (retain, nonatomic) NSString *iblFileName;
@property (retain, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) struct __CFString { } *cgColorSpaceName;
@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } modelToWorldTransform;
@property (retain, nonatomic) NSString *userdata;

+ (id)getThumbnailData:(id)a0;

- (BOOL)writeToFile:(id)a0 options:(id)a1 error:(id *)a2;
- (id)attribute:(id)a0;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)createThumbnail;
- (id)initWithNSData:(id)a0 forDevice:(id)a1 error:(id *)a2;
- (BOOL)doWrite:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithPosition:(const void *)a0 uvs:(const void *)a1 triangles:(const void *)a2 slices:(const void *)a3 colorTextures:(id)a4 colorTexture:(id)a5 colorTextureSlices:(unsigned int)a6 normalTexture:(id)a7 pbrTextures:(id)a8 pbrMaterialDescriptor:(id)a9 iblFileName:(id)a10;
- (id)initWithReader:(void *)a0 device:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 forDevice:(id)a1 error:(id *)a2;
- (id)readHEIC:(const void *)a0 key:(unsigned int)a1 device:(id)a2 error:(id *)a3;
- (id)readHEICs:(const void *)a0 key:(unsigned int)a1 device:(id)a2 error:(id *)a3;
- (id)serializeWithOptions:(id)a0 error:(id *)a1;
- (long long)textureCompressionType;
- (id)trimmedColorTexture;
- (BOOL)writeHEIC:(const void *)a0 texture:(id)a1 key:(unsigned int)a2 quality:(float)a3 error:(id *)a4;
- (BOOL)writeHEICs:(const void *)a0 textures:(id)a1 key:(unsigned int)a2 quality:(float)a3 error:(id *)a4;
- (BOOL)writeToURL:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (BOOL)writeWithWriter:(const void *)a0 options:(id)a1 error:(id *)a2;

@end

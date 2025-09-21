@class NSMutableDictionary, USKScene, NSURL, USKNode;

@interface MXISceneUSDZReader : NSObject

@property (retain, nonatomic) NSURL *usdURL;
@property (retain, nonatomic) USKScene *scene;
@property (retain, nonatomic) USKNode *rootNode;
@property (retain, nonatomic) USKNode *meshNode;
@property (retain, nonatomic) USKNode *materialNode;
@property (retain, nonatomic) USKNode *materialScopeNode;
@property (retain, nonatomic) NSMutableDictionary *materialNodePathToSliceIndex;
@property (nonatomic) unsigned long long textureArrayLength;
@property (nonatomic) unsigned long long textureMipmapLevelCount;

- (void).cxx_destruct;
- (struct MXIGeometry { struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void ***x0; } x0; struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> { void ***x0; } x1; struct vector<std::array<unsigned int, 3>, std::allocator<std::array<unsigned int, 3>>> { void *x0; void *x1; void *x2; } x2; struct vector<unsigned int, std::allocator<unsigned int>> { unsigned int *x0; unsigned int *x1; unsigned int *x2; } x3; })copyMXIGeometryWithError:(id *)a0;
- (id)copyTexturesWithDevice:(id)a0 error:(id *)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getDouble4x4ValueForKey:(id)a0 default:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (double)getDoubleValueForKey:(id)a0 default:(double)a1;
- (float)getFloatValueForKey:(id)a0 default:(float)a1;
- (int)getIntValueForKey:(id)a0 default:(int)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getModelToWorldTransformWithDefault:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (id)getStringValueForKey:(id)a0;
- (id)getThumbnailDataInternal:(id)a0;
- (id)getThumbnailDataWithError:(id *)a0;
- (id)initWithUSDZFileURL:(id)a0;

@end

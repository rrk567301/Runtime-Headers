@class NSMutableDictionary, USKScene, NSURL, NSString, USKNode;

@interface MXISceneUSDZWriter : NSObject {
    NSString *m_colorPrimaries;
    BOOL m_requestTextFormatUSD;
    BOOL m_requestHighCompatibilityUSD;
    BOOL m_useUdim;
}

@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSURL *usdzURL;
@property (retain, nonatomic) NSURL *usdURL;
@property (retain, nonatomic) USKScene *scene;
@property (retain, nonatomic) USKNode *rootNode;
@property (retain, nonatomic) USKNode *meshNode;
@property (retain, nonatomic) USKNode *materialNode;
@property (retain, nonatomic) NSMutableDictionary *geomSubsetNodes;
@property (retain, nonatomic) NSMutableDictionary *sliceMaterialNodes;

- (void)package;
- (id)initWithOptions:(id)a0;
- (BOOL)initCommon;
- (void).cxx_destruct;
- (BOOL)addCombineNode:(id)a0 node:(id *)a1 inputNode:(id)a2 input1:(id)a3 input2:(id)a4 input3:(id)a5 suffix:(id)a6;
- (BOOL)addDouble4x4Value:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 forKey:(id)a1;
- (BOOL)addDoubleValue:(double)a0 forKey:(id)a1;
- (BOOL)addFloatValue:(float)a0 forKey:(id)a1;
- (id)addGeomSubsetToMesh:(id)a0 withTriangleIndices:(int *)a1 triangleIndicesCount:(unsigned long long)a2 sliceId:(int)a3;
- (BOOL)addImageBasedLightingWithFileName:(id)a0 error:(id *)a1;
- (BOOL)addIntValue:(int)a0 forKey:(id)a1;
- (BOOL)addMaterialsWithColorTextures:(id)a0 depthTesselated:(BOOL)a1 error:(id *)a2;
- (BOOL)addMaterialsWithColorTextures:(id)a0 normalTexture:(id)a1 pbrTextures:(id)a2 pbrMaterialDescriptor:(id)a3 depthTesselated:(BOOL)a4 error:(id *)a5;
- (BOOL)addMeshWithMXIGeometry:(const void *)a0 error:(id *)a1;
- (void)addModelToWorldTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (BOOL)addPBRShaderGraphWithMaterialPath:(id)a0 texcoordGetter:(id)a1 indexGetter:(id)a2 PBRSurface:(id *)a3 pbrMaterialDescriptor:(id)a4;
- (BOOL)addSeparateNode:(id)a0 node:(id *)a1 inputNode:(id)a2 separateCount:(unsigned long long)a3 suffix:(id)a4;
- (BOOL)addShaderGraphWithColorKTXResource:(id)a0 NormalKTXResource:(id)a1 pbrKTXFilename:(id)a2 pbrMaterialDescriptor:(id)a3 depthTesselated:(BOOL)a4;
- (id)addShaderToMaterial:(id)a0 withIdentifier:(id)a1 name:(id)a2;
- (BOOL)addSimpleMaterialWithColorArrayTextures:(id)a0;
- (BOOL)addSimpleMaterialWithColorTextures:(id)a0;
- (BOOL)addStringValue:(id)a0 forKey:(id)a1;
- (BOOL)addTexture2DArrayWithMaterialPath:(id)a0 ktxFilename:(id)a1 nodeSuffix:(id)a2 texcoordGetter:(id)a3 indexGetter:(id)a4 colorSpace:(id)a5 node:(id *)a6;
- (BOOL)addThumbnailData:(id)a0 error:(id *)a1;
- (BOOL)addUdimMaterialWithColorArrayTextures:(id)a0;
- (BOOL)addUdimMaterialWithColorTextures:(id)a0;
- (id)buildShaderGraphNodeWithPath:(id)a0 identifier:(id)a1;
- (void)exportSlicesToPNG:(id)a0;
- (id)initWithUSDBundleFileURL:(id)a0 options:(id)a1;
- (id)initWithUSDZFileURL:(id)a0 options:(id)a1;
- (BOOL)setMetadataWithValue:(id)a0 forKey:(id)a1;

@end

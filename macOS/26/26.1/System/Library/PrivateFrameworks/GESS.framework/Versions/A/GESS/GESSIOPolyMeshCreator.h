@class NSData, NSArray, NSDictionary;

@interface GESSIOPolyMeshCreator : NSObject {
    NSData *_positionData;
    NSData *_faceVertexCountData;
    NSData *_faceData;
    NSData *_vertexNormalData;
    NSData *_vertexNormalFaceData;
    NSData *_vertexColorData;
    NSData *_texCoordData;
    NSData *_texCoordFaceData;
    NSData *_faceGroupIDData;
    NSArray *_groupNameArray;
    NSDictionary *_groupIDToMaterialNameDict;
    struct shared_ptr<gess::mesh::Material> { struct Material *__ptr_; struct __shared_weak_count *__cntrl_; } _cppMaterial;
    BOOL _useCppMaterial;
}

- (BOOL)clear;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)setMaterial:(id)a0;
- (BOOL)create:(id)a0;
- (BOOL)setGroupNames:(id)a0;
- (BOOL)setMtlFilePath:(id)a0;
- (BOOL)setFaceData:(id)a0;
- (BOOL)setFaceGroupIDData:(id)a0;
- (BOOL)setFaceVertexCountData:(id)a0;
- (BOOL)setFaceVertexNormalIndexData:(id)a0;
- (BOOL)setFaceVertexUVIndexData:(id)a0;
- (BOOL)setGroupIDToMaterialNameDict:(id)a0;
- (BOOL)setPositionData:(id)a0;
- (BOOL)setUVData:(id)a0;
- (BOOL)setVertexColorData:(id)a0;
- (BOOL)setVertexNormalData:(id)a0;

@end

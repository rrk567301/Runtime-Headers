@class NSArray, NSDictionary, NSData, NSString;

@interface GESSIOPolyMeshCreator : NSObject {
    NSData *_positionData;
    NSData *_faceData;
    NSData *_vertexNormalData;
    NSData *_vertexNormalFaceData;
    NSData *_vertexColorData;
    NSData *_texCoordData;
    NSData *_texCoordFaceData;
    NSData *_faceGroupIDData;
    NSArray *_groupNameArray;
    NSDictionary *_groupIDToMaterialNameDict;
    NSString *_mtlFilePath;
}

- (void).cxx_destruct;
- (char)clear;
- (char)create:(id)a0;
- (char)setGroupNames:(id)a0;
- (char)setMtlFilePath:(id)a0;
- (char)setFaceData:(id)a0;
- (char)setFaceGroupIDData:(id)a0;
- (char)setGroupIDToMaterialNameDict:(id)a0;
- (char)setPositionData:(id)a0;
- (char)setTexCoordData:(id)a0;
- (char)setTexCoordFaceData:(id)a0;
- (char)setVertexColorData:(id)a0;
- (char)setVertexNormalData:(id)a0;
- (char)setVertexNormalFaceData:(id)a0;

@end

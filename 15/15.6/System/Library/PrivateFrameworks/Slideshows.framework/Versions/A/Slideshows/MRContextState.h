@class NSString, NSMutableDictionary, MRShaderArguments;

@interface MRContextState : NSObject {
    float modelViewMatrix[16];
    float textureMatrix[4][16];
    float normal[3];
    unsigned int vbo;
    const float *vertexPointer;
    const float *colorsPointer;
    const float *normalsPointer;
    float *textureCoordinatesPointer[4];
    const float *inSpriteCoordinatesPointer;
    int vertexStride;
    unsigned short vertexFlags;
    char vertexArrayIsEnabled;
    char foreColorArrayIsEnabled;
    char normalArrayIsEnabled;
    char textureCoordinatesArrayIsEnabled[4];
    char inSpriteCoordinatesArrayIsEnabled;
    float foreColor[4];
    float backColor[4];
    unsigned int textureTargetOnUnit[4];
    unsigned int textureNameOnUnit[4];
    double textureTimestampOnUnit[4];
    char blendingIsEnabled;
    int blendingType;
    char cullingIsEnabled;
    char cullFrontfacing;
    char depthTestIsEnabled;
}

@property (copy) NSString *shaderID;
@property (retain) MRShaderArguments *shaderArguments;
@property (readonly) NSMutableDictionary *vertexAttributes;
@property (readonly) NSMutableDictionary *temporaryUniforms;

- (void)dealloc;
- (id)init;

@end

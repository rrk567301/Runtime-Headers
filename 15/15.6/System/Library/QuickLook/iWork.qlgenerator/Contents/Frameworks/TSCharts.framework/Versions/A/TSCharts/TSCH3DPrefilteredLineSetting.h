@class TSDStroke;

@interface TSCH3DPrefilteredLineSetting : NSObject

@property (nonatomic) char useNormals;
@property (nonatomic) char disableColorOutput;
@property (nonatomic) char cullBackfaces;
@property (nonatomic) struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } filterRadius;
@property (nonatomic) float lineWidth;
@property (nonatomic) struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } strokeColor;
@property (copy, nonatomic) TSDStroke *stroke;

+ (id)setting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;

@end

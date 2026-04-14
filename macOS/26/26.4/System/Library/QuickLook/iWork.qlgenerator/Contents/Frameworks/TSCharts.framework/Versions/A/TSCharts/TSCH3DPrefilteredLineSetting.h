@class TSDStroke;

@interface TSCH3DPrefilteredLineSetting : NSObject

@property (nonatomic) BOOL useNormals;
@property (nonatomic) BOOL disableColorOutput;
@property (nonatomic) BOOL cullBackfaces;
@property (nonatomic) struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } filterRadius;
@property (nonatomic) float lineWidth;
@property (nonatomic) struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } strokeColor;
@property (copy, nonatomic) TSDStroke *stroke;

+ (id)setting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id).cxx_construct;

@end

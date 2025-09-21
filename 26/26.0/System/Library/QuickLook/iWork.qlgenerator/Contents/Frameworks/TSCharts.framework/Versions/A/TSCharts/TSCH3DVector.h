@interface TSCH3DVector : NSObject <TSSPropertyValueArchiving, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) float x;
@property (readonly, nonatomic) float y;
@property (readonly, nonatomic) float z;
@property (readonly, nonatomic) float w;

+ (id)vector;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;
+ (id)vectorWithVec2:(const void *)a0;
+ (id)vectorWithVec4:(const void *)a0;
+ (id)vectorWithVec3:(const void *)a0;
+ (unsigned long long)hashVec4:(void *)a0;
+ (id)x:(float)a0 y:(float)a1 z:(float)a2;
+ (id)x:(float)a0 y:(float)a1 z:(float)a2 w:(float)a3;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })value;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (float)valueForDimension:(unsigned long long)a0;
- (struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })value2;
- (struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; })value3;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)initWithVec2:(const void *)a0;
- (id)initWithVec3:(const void *)a0;
- (id)initWithVec4:(const void *)a0;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2 w:(float)a3;
- (struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; })value4;

@end

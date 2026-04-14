@interface CCDisplayDistortionDescriptor : CCDataDescriptor

@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic) void /* unknown type, empty encoding */ visibilitySize;
@property (nonatomic) float visibilityCutoffValue;
@property (nonatomic) void /* unknown type, empty encoding */ displaySize;
@property (nonatomic) struct CCBoraGridAlignment { long long spacing; int offset; } gridAlignment;
@property (nonatomic) struct CCBoraGridAlignment { long long spacing; int offset; } displayVisibilitySDFAlignment;
@property (nonatomic) void /* unknown type, empty encoding */ tanAngleRange;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptVisitor:(id)a0;

@end

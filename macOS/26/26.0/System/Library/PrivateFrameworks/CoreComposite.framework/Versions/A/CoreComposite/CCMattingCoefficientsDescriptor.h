@interface CCMattingCoefficientsDescriptor : CCDataDescriptor

@property (nonatomic) void /* unknown type, empty encoding */ size;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) struct CCTanAngleRange { float minX; float maxX; float minY; float maxY; } tanAngleRange;
@property (nonatomic) void /* unknown type, empty encoding */ tanAngleSize;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;

@end

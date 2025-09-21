@protocol MTLTexture;

@interface CCDisplayReprojectedDepthData : CCData {
    struct CCDepthCompressionPlaneParameters { void /* unknown type, empty encoding */ origin; void /* unknown type, empty encoding */ normal; float distance; } _planeCompressionParameters;
    struct { void /* unknown type, empty encoding */ columns[3]; } _reprojectedDepthIntrinsics;
    id<MTLTexture> _depth;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

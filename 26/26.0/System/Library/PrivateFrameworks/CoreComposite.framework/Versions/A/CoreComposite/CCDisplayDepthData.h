@protocol MTLTexture;

@interface CCDisplayDepthData : CCData {
    struct { void /* unknown type, empty encoding */ columns[4]; } _displayToDepth;
    struct { void /* unknown type, empty encoding */ columns[3]; } _intrinsics;
    id<MTLTexture> _depth;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

@protocol MTLTexture, MTLBuffer;

@interface CCDisplayMeshData : CCData {
    id<MTLTexture> _meshDepth;
    id<MTLBuffer> _targetBuffer;
    void /* unknown type, empty encoding */ _gridInitOffset;
    void /* unknown type, empty encoding */ _pixelShift;
    unsigned short _yStart;
    struct { int x[5]; int y[5]; } _regionPixelShift;
    BOOL _showMonsterStamp;
}

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

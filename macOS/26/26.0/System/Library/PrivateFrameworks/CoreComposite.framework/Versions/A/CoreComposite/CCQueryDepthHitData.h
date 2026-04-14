@protocol MTLBuffer;

@interface CCQueryDepthHitData : CCData {
    BOOL _rayMarch;
    void /* unknown type, empty encoding */ _forwardAxis;
    unsigned int _count[2][2];
    unsigned int _resultIndex[2][2];
    struct { struct CCQueryDepthHitQuery *ptr; id<MTLBuffer> buffer; } _inputQuery;
    id<MTLBuffer> _resultBuffer;
    struct CCQueryDepthHitResult { float x0; } *_resultPtr;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

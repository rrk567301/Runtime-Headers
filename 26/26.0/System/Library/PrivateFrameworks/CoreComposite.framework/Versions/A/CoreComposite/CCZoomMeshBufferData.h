@class NSData;
@protocol MTLBuffer;

@interface CCZoomMeshBufferData : CCData {
    BOOL _repositioning;
    float _factor;
    id<MTLBuffer> _lensMesh;
    unsigned long long _lensMeshOffset;
    unsigned long long _lensMeshIndexCount;
    struct { void /* unknown type, empty encoding */ columns[4]; } _pastWorldToCurrentWorld;
    void /* unknown type, empty encoding */ _lensCenter;
    unsigned long long _borderMeshOffset;
    unsigned long long _borderMeshIndexCount;
    struct { void /* unknown type, empty encoding */ columns[4]; } _lensTransform;
    BOOL _isZoomWarpPass;
    unsigned long long _lensMeshIndexOffset;
    unsigned long long _borderMeshIndexOffset;
}

@property (retain, nonatomic) NSData *lensMeshData;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end

@class NSArray;

@interface CCWarpDepthExtremeDownSampleData : CCData

@property (class, readonly, nonatomic) long long maxTextureWidth;
@property (class, readonly, nonatomic) long long maxTextureHeight;

@property (retain, nonatomic) NSArray *textureStorageArray;
@property (retain, nonatomic) NSArray *textureArray;
@property (nonatomic) void /* unknown type, empty encoding */ validTextureDims;

+ (BOOL)supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end

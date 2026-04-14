@class NSArray, CCWarpIntermediateData;
@protocol MTLDevice;

@interface CCIntermediateData : CCData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CCWarpIntermediateData *warpIntermediateData;
@property (readonly, copy, nonatomic) NSArray *resources;
@property (readonly, nonatomic) id<MTLDevice> device;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end

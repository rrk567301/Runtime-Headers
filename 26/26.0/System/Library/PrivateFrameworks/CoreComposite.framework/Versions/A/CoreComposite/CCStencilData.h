@class NSData;
@protocol MTLBuffer;

@interface CCStencilData : CCData {
    struct CCStencilBufferStruct { id<MTLBuffer> stencilBuffer; unsigned long long triangleCount; unsigned long long primitiveType; NSData *stencilBufferData; } _stencilBuffersArray[2];
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end

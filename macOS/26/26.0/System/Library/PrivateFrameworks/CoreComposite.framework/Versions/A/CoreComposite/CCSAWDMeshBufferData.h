@class NSData;
@protocol MTLBuffer;

@interface CCSAWDMeshBufferData : CCData {
    id<MTLBuffer> _sawdVertexBuffer;
    id<MTLBuffer> _sawdIndexBuffer;
    NSData *_sawdVertexData;
    NSData *_sawdIndexData;
    struct { void /* unknown type, empty encoding */ columns[4]; } _targetViewMatrix[2];
    struct CCSAWDMeshDescriptorRange { unsigned long long start; unsigned long long length; } _sawdMeshDescriptorRange[5];
    struct CCSAWDMeshDescriptor { struct CCSAWDMeshUniform { struct { void /* unknown type, empty encoding */ columns[4]; } world_from_model_transform; void /* unknown type, empty encoding */ color; } uniforms[8]; unsigned long long instanceCount; unsigned long long vertexBufferOffset; unsigned long long indexBufferOffset; unsigned long long indexBufferLength; unsigned char breakthroughLayer; } _sawdMeshDescriptors[28];
}

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataWithSerializedMetalObjects:(id)a0 deviceGroup:(id)a1;
- (void)deserializeMetalObjects:(id)a0 deviceGroup:(id)a1;

@end

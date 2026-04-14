@interface VFXREDrawCall : NSObject {
    void /* unknown type, empty encoding */ drawCall;
    void /* unknown type, empty encoding */ material;
    void /* unknown type, empty encoding */ aabb;
    void /* unknown type, empty encoding */ reProvidedBuffers;
    void /* unknown type, empty encoding */ reProvidedTextures;
}

- (id)init;
- (void).cxx_destruct;
- (id)indexBuffer;
- (long long)indexBufferOffset;
- (unsigned char)indexType;
- (long long)instanceCount;
- (unsigned long long)primitiveType;
- (long long)vertexCount;
- (long long)indexCount;
- (void /* unknown type, empty encoding */)boundingBoxMin;
- (void /* unknown type, empty encoding */)boundingBoxMax;
- (long long)indexBufferSize;
- (unsigned long long)materialIdentifier;
- (unsigned long long)winding;
- (void)enumerateBuffers:(id /* block */)a0;
- (void)enumerateTextures:(id /* block */)a0;
- (BOOL)hasLightingEnabled;
- (void)withDefaultLightConstantBuffer:(void *)a0 :(id /* block */)a1;
- (id)meshIdentifier;
- (void)withDefaultIBLConstantBuffer:(void *)a0 :(id /* block */)a1;

@end

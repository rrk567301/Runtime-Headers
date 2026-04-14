@class NSString;

@interface VFXREDrawCall : NSObject {
    void /* unknown type, empty encoding */ drawCall;
    void /* unknown type, empty encoding */ aabb;
    void /* unknown type, empty encoding */ reProvidedBuffers;
    void /* unknown type, empty encoding */ reProvidedTextures;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ renderPassName;
}

@property (nonatomic, readonly) id /* block */ customHandler;
@property (nonatomic, readonly) BOOL hasCustomHandler;
@property (nonatomic, copy) NSString *renderPassName;

- (id)init;
- (void).cxx_destruct;
- (id)indexBuffer;
- (long long)indexBufferOffset;
- (unsigned char)indexType;
- (long long)instanceCount;
- (unsigned long long)primitiveType;
- (long long)vertexCount;
- (long long)indexCount;
- (void /* unknown type, empty encoding */)boundingBoxMax;
- (void /* unknown type, empty encoding */)boundingBoxMin;
- (long long)indexBufferSize;
- (unsigned long long)materialIdentifier;
- (void)enumerateBuffers:(id /* block */)a0;
- (id)meshIdentifier;
- (BOOL)hasLightingEnabled;
- (void)withDefaultLightConstantBuffer:(void *)a0 :(id /* block */)a1;
- (void)withDefaultIBLConstantBuffer:(void *)a0 :(id /* block */)a1;
- (unsigned long long)winding;
- (void)enumerateTextures:(id /* block */)a0;

@end

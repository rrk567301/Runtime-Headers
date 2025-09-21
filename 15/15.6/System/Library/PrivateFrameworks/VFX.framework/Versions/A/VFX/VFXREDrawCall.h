@class NSString;

@interface VFXREDrawCall : NSObject {
    void /* unknown type, empty encoding */ drawCall;
    void /* unknown type, empty encoding */ aabb;
    void /* unknown type, empty encoding */ _isDepthOnly;
    void /* unknown type, empty encoding */ _writesColor;
    void /* unknown type, empty encoding */ _writesSeparateDepth;
    void /* unknown type, empty encoding */ _needsLinearDepth;
    void /* unknown type, empty encoding */ _drawsForBlur;
    void /* unknown type, empty encoding */ _isAdditive;
    void /* unknown type, empty encoding */ _materialType;
    void /* unknown type, empty encoding */ reProvidedBuffers;
    void /* unknown type, empty encoding */ reProvidedTextures;
    void /* unknown type, empty encoding */ handler;
    void /* unknown type, empty encoding */ renderPassName;
    void /* unknown type, empty encoding */ emitterIdentifier;
}

@property (nonatomic, readonly) id /* block */ customHandler;
@property (nonatomic, readonly) char hasCustomHandler;
@property (nonatomic, copy) NSString *renderPassName;
@property (nonatomic) void /* unknown type, empty encoding */ renderPassIdentifier;
@property (nonatomic, readonly) char writesColor;
@property (nonatomic, readonly) char writesSeparateDepth;
@property (nonatomic, readonly) char needsLinearDepth;
@property (nonatomic, readonly) char isDepthOnly;
@property (nonatomic, readonly) char drawsForBlur;
@property (nonatomic, readonly) char isAdditive;
@property (nonatomic, readonly) int materialType;
@property (nonatomic, readonly) int renderingOrder;
@property (nonatomic, copy) NSString *emitterIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)indexBuffer;
- (long long)indexBufferOffset;
- (unsigned char)indexType;
- (long long)instanceCount;
- (long long)vertexCount;
- (unsigned long long)primitiveType;
- (long long)indexCount;
- (unsigned long long)materialIdentifier;
- (long long)indexBufferSize;
- (void /* unknown type, empty encoding */)boundingBoxMax;
- (void /* unknown type, empty encoding */)boundingBoxMin;
- (unsigned long long)winding;
- (void)enumerateBuffers:(id /* block */)a0;
- (void)enumerateTextures:(id /* block */)a0;
- (char)hasLightingEnabled;
- (void)withDefaultIBLConstantBuffer:(void *)a0 :(id /* block */)a1;
- (void)withDefaultLightConstantBuffer:(void *)a0 :(id /* block */)a1;

@end

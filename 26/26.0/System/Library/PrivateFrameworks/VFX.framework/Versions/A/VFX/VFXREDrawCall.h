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
    void /* function */ renderPassName;
    void /* unknown type, empty encoding */ emitter;
}

@property (nonatomic, readonly) id /* block */ customHandler;
@property (nonatomic, readonly) BOOL hasCustomHandler;
@property (nonatomic, copy) NSString *renderPassName;
@property (nonatomic) unsigned char renderPassIdentifier;
@property (nonatomic, readonly) BOOL writesColor;
@property (nonatomic, readonly) BOOL writesSeparateDepth;
@property (nonatomic, readonly) BOOL needsLinearDepth;
@property (nonatomic, readonly) BOOL isDepthOnly;
@property (nonatomic, readonly) BOOL drawsForBlur;
@property (nonatomic, readonly) BOOL isAdditive;
@property (nonatomic, readonly) int materialType;
@property (nonatomic, readonly) int renderingOrder;
@property (nonatomic, readonly) long long emitterObjectID;

- (unsigned char)indexType;
- (long long)instanceCount;
- (id)init;
- (long long)vertexCount;
- (void).cxx_destruct;
- (id)indexBuffer;
- (long long)indexBufferOffset;
- (unsigned long long)primitiveType;
- (long long)indexCount;
- (long long)indexBufferSize;
- (void /* unknown type, empty encoding */)boundingBoxMax;
- (void /* unknown type, empty encoding */)boundingBoxMin;
- (unsigned long long)materialIdentifier;
- (unsigned long long)winding;
- (void)enumerateBuffers:(id /* block */)a0;
- (void)enumerateTextures:(id /* block */)a0;
- (BOOL)hasLightingEnabled;

@end

@protocol MTLBuffer;

@interface VFXMTLSkinDeformerReadOnlyBuffers : NSObject {
    unsigned long long _influenceIndexSize;
    unsigned long long _boneIndexSize;
    id<MTLBuffer> _influenceOffsetsBuffer;
    id<MTLBuffer> _boneIndicesBuffer;
    id<MTLBuffer> _boneWeightsBuffer;
}

- (void)dealloc;

@end

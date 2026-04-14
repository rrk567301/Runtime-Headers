@protocol PXGSpriteTexture;

@interface _PXGViewSetupParameters : NSObject {
    BOOL _needsParenting;
    BOOL _separateLayers;
    unsigned int _spriteIndex;
    long long _floatingAxis;
    id<PXGSpriteTexture> _texture;
    struct { void /* unknown type, empty encoding */ sampleOrigin; void /* unknown type, empty encoding */ sampleSize; void /* unknown type, empty encoding */ textureSize; void /* unknown type, empty encoding */ orientationTransform; float alpha; float suppressContentsRect; } _textureInfo;
}

- (void).cxx_destruct;

@end

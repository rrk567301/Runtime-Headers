@class GTMTLReplayObjectMap;
@protocol MTLTexture;

@interface GTMetalDrawable : NSObject {
    id<MTLTexture> _texture;
    GTMTLReplayObjectMap *_objectMap;
    unsigned long long _streamRef;
}

- (id)texture;
- (void).cxx_destruct;
- (id)initWithTexture:(id)a0;
- (id)initWithObjectMap:(id)a0 textureStreamRef:(unsigned long long)a1;

@end

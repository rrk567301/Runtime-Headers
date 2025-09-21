@class CAMetalLayer;

@interface DYCAMetalLayerWrapper : NSObject {
    CAMetalLayer *_layer;
}

- (id)nextDrawable;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)nextDrawableWithTextureResourceIndex:(unsigned long long)a0;

@end

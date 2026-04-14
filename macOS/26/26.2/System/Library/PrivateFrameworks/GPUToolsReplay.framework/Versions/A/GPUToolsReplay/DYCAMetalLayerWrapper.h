@class CAMetalLayer;

@interface DYCAMetalLayerWrapper : NSObject {
    CAMetalLayer *_layer;
}

- (id)nextDrawable;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)nextDrawableWithTextureResourceIndex:(unsigned long long)a0;

@end

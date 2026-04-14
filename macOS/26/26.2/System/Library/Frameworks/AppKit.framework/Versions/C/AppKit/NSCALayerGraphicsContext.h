@class CALayer;

@interface NSCALayerGraphicsContext : NSWindowGraphicsContext {
    CALayer *_layer;
    struct { unsigned char _isFlipped : 1; unsigned int _unused : 31; } _lgcFlags;
}

- (id)CALayer;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)_initWithGraphicsPort:(void *)a0 CALayer:(id)a1 flipped:(BOOL)a2;

@end

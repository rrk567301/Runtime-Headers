@class CALayer;

@interface AVPanoramicStretchHelper : NSObject {
    CALayer *_layer;
}

- (id)initWithLayer:(id)a0;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updatePanoramicStretchForLayer;

@end

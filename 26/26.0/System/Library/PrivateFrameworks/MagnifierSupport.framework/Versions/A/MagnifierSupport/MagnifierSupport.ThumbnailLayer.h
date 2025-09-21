@interface MagnifierSupport.ThumbnailLayer : CALayer {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ ratios;
    void /* unknown type, empty encoding */ portalLayer;
    void /* unknown type, empty encoding */ sourceSize;
    void /* unknown type, empty encoding */ _perspectiveTransformLayer;
    void /* unknown type, empty encoding */ _thumbnailLayer;
}

- (void)layoutSublayers;
- (id)initWithLayer:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end

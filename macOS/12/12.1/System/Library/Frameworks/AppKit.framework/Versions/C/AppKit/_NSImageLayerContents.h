@class NSImage, NSCGImageSnapshotRep;

@interface _NSImageLayerContents : NSObject {
    NSImage *_image;
    double _scale;
    NSCGImageSnapshotRep *_cachedSnapshot;
}

- (void)dealloc;
- (id)replacementObjectForCoder:(id)a0;
- (id)initWithImage:(id)a0 scaleFactor:(double)a1;
- (struct CGImage { } *)_CGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (void)CA_prepareRenderValue;
- (void *)CA_copyRenderValue;

@end

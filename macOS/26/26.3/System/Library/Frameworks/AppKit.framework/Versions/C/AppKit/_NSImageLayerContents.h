@class NSImage, NSCGImageSnapshotRep;

@interface _NSImageLayerContents : NSObject {
    NSImage *_image;
    double _scale;
    NSCGImageSnapshotRep *_cachedSnapshot;
}

- (void *)CA_copyRenderValue;
- (id)replacementObjectForCoder:(id)a0;
- (void)dealloc;
- (void)CA_prepareRenderValue;
- (struct CGImage { } *)_CGImageWithColorSpace:(struct CGColorSpace { } *)a0;
- (id)initWithImage:(id)a0 scaleFactor:(double)a1;

@end

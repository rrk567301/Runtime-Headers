@interface PXGEmptyTexture : PXGBaseTexture

- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })pixelSize;
- (struct CGImage { } *)imageRepresentation;
- (int)presentationType;
- (long long)estimatedByteSize;

@end

@interface PXGEmptyTexture : PXGBaseTexture

- (BOOL)isOpaque;
- (struct CGImage { } *)imageRepresentation;
- (struct CGSize { double x0; double x1; })pixelSize;
- (unsigned char)presentationType;
- (long long)estimatedByteSize;

@end

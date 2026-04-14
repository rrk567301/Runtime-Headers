@interface PXGEmptyTexture : PXGBaseTexture

- (struct CGSize { double x0; double x1; })pixelSize;
- (BOOL)isOpaque;
- (struct CGImage { } *)imageRepresentation;
- (unsigned char)presentationType;
- (long long)estimatedByteSize;

@end

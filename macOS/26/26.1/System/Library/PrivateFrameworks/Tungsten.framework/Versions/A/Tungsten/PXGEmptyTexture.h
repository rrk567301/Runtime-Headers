@interface PXGEmptyTexture : PXGBaseTexture

- (struct CGSize { double x0; double x1; })pixelSize;
- (struct CGImage { } *)imageRepresentation;
- (BOOL)isOpaque;
- (unsigned char)presentationType;
- (long long)estimatedByteSize;

@end

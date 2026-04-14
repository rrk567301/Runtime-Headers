@interface NUVisionForegroundIsolationSegmentationRequest : NURenderRequest

- (void)_commonInit;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)submit:(id /* block */)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end

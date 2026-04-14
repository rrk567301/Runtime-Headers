@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;

- (unsigned int)mediaType;
- (id)highResStillImageDimensions;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (BOOL)isStillImageOnlyDepthData;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (BOOL)RGBIRStereoFusionSupported;
- (BOOL)gainMapSupported;

@end

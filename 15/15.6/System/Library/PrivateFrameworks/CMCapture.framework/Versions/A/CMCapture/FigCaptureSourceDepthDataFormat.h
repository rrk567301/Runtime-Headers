@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;

- (unsigned int)mediaType;
- (id)highResStillImageDimensions;
- (char)RGBIRStereoFusionSupported;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (char)gainMapSupported;
- (char)isStillImageOnlyDepthData;

@end

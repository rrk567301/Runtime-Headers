@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;
@property (readonly) float sensorOrientation;
@property (readonly) BOOL isPrivate;

- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (id)highResStillImageDimensions;
- (BOOL)isStreamingOnlyDepthData;
- (BOOL)gainMapSupported;
- (BOOL)RGBIRStereoFusionSupported;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (unsigned int)mediaType;
- (BOOL)isStillImageOnlyDepthData;

@end

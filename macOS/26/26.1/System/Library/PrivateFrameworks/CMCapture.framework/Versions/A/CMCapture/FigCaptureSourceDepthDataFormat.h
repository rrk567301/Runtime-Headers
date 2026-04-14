@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;
@property (readonly) float sensorOrientation;
@property (readonly) BOOL isPrivate;

- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (id)highResStillImageDimensions;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (BOOL)gainMapSupported;
- (BOOL)isStreamingOnlyDepthData;
- (unsigned int)mediaType;
- (BOOL)RGBIRStereoFusionSupported;
- (BOOL)isStillImageOnlyDepthData;

@end

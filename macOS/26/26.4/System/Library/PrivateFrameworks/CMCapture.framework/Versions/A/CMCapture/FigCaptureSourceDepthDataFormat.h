@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;
@property (readonly) float sensorOrientation;
@property (readonly) BOOL isPrivate;

- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (id)highResStillImageDimensions;
- (BOOL)gainMapSupported;
- (unsigned int)mediaType;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (BOOL)isStillImageOnlyDepthData;
- (BOOL)RGBIRStereoFusionSupported;
- (BOOL)isStreamingOnlyDepthData;

@end

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;
@property (readonly) float sensorOrientation;
@property (readonly) BOOL isPrivate;

- (id)highResStillImageDimensions;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (BOOL)gainMapSupported;
- (BOOL)isStillImageOnlyDepthData;
- (BOOL)isStreamingOnlyDepthData;
- (BOOL)RGBIRStereoFusionSupported;
- (unsigned int)mediaType;

@end

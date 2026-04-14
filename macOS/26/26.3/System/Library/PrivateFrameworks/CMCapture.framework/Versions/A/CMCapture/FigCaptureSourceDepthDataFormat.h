@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;
@property (readonly) float sensorOrientation;
@property (readonly) BOOL isPrivate;

- (id)highResStillImageDimensions;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (BOOL)RGBIRStereoFusionSupported;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (BOOL)isStreamingOnlyDepthData;
- (unsigned int)mediaType;
- (BOOL)isStillImageOnlyDepthData;
- (BOOL)gainMapSupported;

@end

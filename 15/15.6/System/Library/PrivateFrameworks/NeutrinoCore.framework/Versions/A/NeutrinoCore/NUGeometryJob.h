@interface NUGeometryJob : NURenderJob

- (id)result;
- (id)geometryRequest;
- (id)scalePolicy;
- (char)wantsCompleteStage;
- (char)wantsOutputGeometry;
- (char)wantsRenderStage;

@end

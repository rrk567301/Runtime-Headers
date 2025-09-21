@interface PIAutoLoopExportJob : NUVideoExportJob

+ (id)metalRenderer;
+ (char)shouldUseMetalRenderer;

- (id)initWithVideoExportRequest:(id)a0;
- (id)renderer:(out id *)a0;
- (char)writeVideoFrom:(id)a0 toWriter:(id)a1 stillImageTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 createCustomMetadata:(char)a3 geometryTransform:(id)a4 inputSize:(struct CGSize { double x0; double x1; })a5 outputSize:(struct CGSize { double x0; double x1; })a6 error:(out id *)a7;
- (id)autoLoopExportRequest;
- (id)initWithAutoLoopExportRequest:(id)a0;

@end

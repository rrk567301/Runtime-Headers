@class NSDictionary;

@interface VCPVideoFaceMeshAnalyzer : NSObject

@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } pose;
@property (readonly, nonatomic) NSDictionary *blendShapes;
@property (readonly, nonatomic) unsigned long long vertexCount;
@property (readonly, nonatomic) const void *vertices;
@property (readonly, nonatomic) const float *landmarks;
@property (readonly, nonatomic) char bufferRotated;

- (void).cxx_destruct;
- (char)isTracked;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withRotation:(int)a2 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3;
- (id)initWithFocalLengthInPixels:(float)a0 offline:(char)a1 isFastMode:(char)a2;
- (char)updateFocalLengthInPixels:(float)a0;

@end

@interface VCPVideoFacePoseAnalyzer : NSObject

@property struct { void /* unknown type, empty encoding */ columns[4]; } pose;

- (int)analyzeFrameForPose:(struct __CVBuffer { } *)a0 withFaceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (id)initWithFocalLengthInPixels:(float)a0;
- (char)updateFocalLengthInPixels:(float)a0;

@end

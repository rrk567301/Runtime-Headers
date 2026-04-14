@class ABPKCameraParams;

@interface ABPKInput : NSObject

@property struct __CVBuffer { } *image;
@property (nonatomic) struct __CVBuffer { } *depthMap;
@property (nonatomic) struct __CVBuffer { } *depthConfidenceBuffer;
@property (nonatomic) BOOL isDepthDataValid;
@property struct { void /* unknown type, empty encoding */ columns[4]; } vioPose;
@property BOOL isVioPoseValid;
@property double timestamp;
@property (retain) ABPKCameraParams *cameraParams;

- (void).cxx_destruct;
- (id)init;
- (int)saveDataToDir:(id)a0 withFileNamePrefix:(id)a1;

@end

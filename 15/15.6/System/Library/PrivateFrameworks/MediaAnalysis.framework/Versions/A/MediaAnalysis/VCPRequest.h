@interface VCPRequest : NSObject {
    int _width;
    int _height;
    int _maxNumHands;
    int _maxNumPets;
    int _humanActionWindowSize;
    int _maxNumOfPersons;
    int _maxNumOfPersonsForPose;
    unsigned int _motionFlowComputationAccuracy;
    char _enableHandDetection;
    char _enableANSTHandDetection;
    char _enableRejectHandsNearBoundaries;
    char _optimizeForDistance;
    char _enableHandPoseLite;
    char _useAsync;
    float _minHandSize;
}

@property (readonly, nonatomic) char useCPUOnly;
@property (readonly, nonatomic) unsigned int revision;

+ (char)useHandsLitePoseForVision;

- (id)init;
- (id)initWithOptions:(id)a0;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (unsigned int)preferredPixelFormat;
- (char)updateWithOptions:(id)a0 error:(id *)a1;
- (char)cleanupWithOptions:(id)a0 error:(id *)a1;

@end

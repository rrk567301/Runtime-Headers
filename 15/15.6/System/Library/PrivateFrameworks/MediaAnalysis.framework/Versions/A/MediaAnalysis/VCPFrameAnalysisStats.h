@class VCPVideoActivityDescriptor, NSMutableArray;

@interface VCPFrameAnalysisStats : NSObject

@property (nonatomic) char frameProcessedByVideoAnalyzer;
@property (nonatomic) float cameraMotionScore;
@property (nonatomic) float subjectActionScore;
@property (nonatomic) float subtleMotionScore;
@property (nonatomic) float interestingnessScore;
@property (nonatomic) float obstructionScore;
@property (nonatomic) float exposureScore;
@property (nonatomic) float colorfulnessScore;
@property (nonatomic) char subMbMotionAvailable;
@property (nonatomic) float frameExpressionScore;
@property (nonatomic) float faceArea;
@property (nonatomic) struct array<float, 6UL> { float __elems_[6]; } motionParam;
@property (nonatomic) struct array<float, 6UL> { float __elems_[6]; } motionParamDiff;
@property (nonatomic) char frameProcessedByHumanAnalyzer;
@property (nonatomic) float humanPoseScore;
@property (nonatomic) float humanActionScore;
@property (nonatomic) char frameProcessedByFaceDetector;
@property (retain, nonatomic) NSMutableArray *detectedFaces;
@property (retain, nonatomic) NSMutableArray *petsDetections;
@property (nonatomic) char frameProcessedByPetsActionAnalyzer;
@property (nonatomic) float petsActionScore;
@property (retain, nonatomic) VCPVideoActivityDescriptor *videoActivityDescriptor;

- (id)init;
- (void).cxx_destruct;
- (void)reset;

@end

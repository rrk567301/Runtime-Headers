@class NSNumber;

@interface BKFaceDetectStateInfo : NSObject

@property (readonly, nonatomic) char faceDetected;
@property (readonly, nonatomic) NSNumber *pitch;
@property (readonly, nonatomic) NSNumber *yaw;
@property (readonly, nonatomic) NSNumber *roll;
@property (readonly, nonatomic) NSNumber *distance;
@property (readonly, nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) unsigned long long eyeReliefStatus;
@property (readonly, nonatomic) NSNumber *isCameraObstructed;
@property (readonly, nonatomic) NSNumber *cameraObstructionScore;
@property (readonly, nonatomic) NSNumber *frameNumber;
@property (readonly, nonatomic) NSNumber *attentionScore;
@property (readonly, nonatomic) NSNumber *faceDetectionScore;
@property (readonly, nonatomic) char tooCloseToCamera;
@property (readonly, nonatomic) char tooFarFromCamera;
@property (readonly, nonatomic) char multipleFaces;
@property (readonly, nonatomic) char flare;
@property (readonly, nonatomic) char occlusion;
@property (readonly, nonatomic) char partiallyOutOfView;
@property (readonly, nonatomic) char unsupportedGlasses;
@property (readonly, nonatomic) char glassesMismatch;

- (void).cxx_destruct;

@end

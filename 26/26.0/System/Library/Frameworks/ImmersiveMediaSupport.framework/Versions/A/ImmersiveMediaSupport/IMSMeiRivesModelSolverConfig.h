@class IMSMeiRivesModel;

@interface IMSMeiRivesModelSolverConfig : NSObject

@property int maximumIterations;
@property float gradientTolerance;
@property float parameterTolerance;
@property float costTolerance;
@property (retain) IMSMeiRivesModel *modelInit;
@property BOOL fixIntrinsic;
@property BOOL fixDistortion;
@property BOOL fixFxFyEqual;
@property BOOL fixXi;
@property BOOL fixSkew;
@property BOOL fixP1P2;
@property BOOL isGroundtruthLeftHand;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end

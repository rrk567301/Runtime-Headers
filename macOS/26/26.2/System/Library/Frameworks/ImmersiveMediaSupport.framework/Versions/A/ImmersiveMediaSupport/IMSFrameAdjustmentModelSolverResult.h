@class IMSFrameAdjustmentModel;

@interface IMSFrameAdjustmentModelSolverResult : NSObject

@property BOOL isFitted;
@property int iterations;
@property float totalReprojectionError;
@property float unitReprojectionError;
@property float timeCost;
@property (retain) IMSFrameAdjustmentModel *model;

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

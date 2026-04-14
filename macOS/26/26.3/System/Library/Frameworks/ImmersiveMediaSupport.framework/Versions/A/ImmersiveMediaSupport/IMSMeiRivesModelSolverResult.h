@class IMSMeiRivesModel;

@interface IMSMeiRivesModelSolverResult : NSObject

@property BOOL isFitted;
@property int iterations;
@property float totalReprojectionError;
@property float unitReprojectionError;
@property float timeCost;
@property (retain) IMSMeiRivesModel *model;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end

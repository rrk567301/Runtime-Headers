@interface PNAssetGroupOptions : NSObject

@property (nonatomic) BOOL groupByDifferentOrientation;
@property (nonatomic) BOOL groupBySharedLibraryParticipationState;
@property (nonatomic) double comparableCurationScoreThreshold;
@property (nonatomic) int distanceThreshold;
@property (nonatomic) int distanceFromFirstThreshold;
@property (nonatomic) int distanceIfAdjustedDiffersThreshold;

- (id)init;

@end

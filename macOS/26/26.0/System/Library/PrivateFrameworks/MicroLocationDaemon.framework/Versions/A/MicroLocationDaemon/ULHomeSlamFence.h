@class NSUUID;

@interface ULHomeSlamFence : NSObject

@property (nonatomic) float radiusSquare;
@property (nonatomic) float deltaPositionX;
@property (nonatomic) float deltaPositionY;
@property (retain, nonatomic) NSUUID *trajectoryUUID;

- (void)_resetState;
- (void).cxx_destruct;
- (BOOL)didFenceCrossWithOdometryEntry:(const void *)a0;
- (BOOL)_checkFenceCrossAndResetIfNeeded;
- (void)_updateStateWithEntry:(const void *)a0;
- (id)initWithFenceRadius:(float)a0;

@end

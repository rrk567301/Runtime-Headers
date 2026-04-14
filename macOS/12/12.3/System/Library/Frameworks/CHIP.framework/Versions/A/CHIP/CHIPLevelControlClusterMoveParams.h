@class NSNumber;

@interface CHIPLevelControlClusterMoveParams : NSObject

@property (retain, nonatomic) NSNumber *moveMode;
@property (retain, nonatomic) NSNumber *rate;
@property (retain, nonatomic) NSNumber *optionMask;
@property (retain, nonatomic) NSNumber *optionOverride;

- (id)init;
- (void).cxx_destruct;

@end

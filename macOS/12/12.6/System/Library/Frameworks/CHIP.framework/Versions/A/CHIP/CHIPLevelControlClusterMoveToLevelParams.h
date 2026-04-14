@class NSNumber;

@interface CHIPLevelControlClusterMoveToLevelParams : NSObject

@property (retain, nonatomic) NSNumber *level;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSNumber *optionMask;
@property (retain, nonatomic) NSNumber *optionOverride;

- (id)init;
- (void).cxx_destruct;

@end

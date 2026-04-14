@class NSNumber;

@interface CHIPLevelControlClusterStepParams : NSObject

@property (retain, nonatomic) NSNumber *stepMode;
@property (retain, nonatomic) NSNumber *stepSize;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSNumber *optionMask;
@property (retain, nonatomic) NSNumber *optionOverride;

- (id)init;
- (void).cxx_destruct;

@end

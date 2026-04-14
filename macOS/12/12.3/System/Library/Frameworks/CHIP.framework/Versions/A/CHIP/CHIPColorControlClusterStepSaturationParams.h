@class NSNumber;

@interface CHIPColorControlClusterStepSaturationParams : NSObject

@property (retain, nonatomic) NSNumber *stepMode;
@property (retain, nonatomic) NSNumber *stepSize;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSNumber *optionsMask;
@property (retain, nonatomic) NSNumber *optionsOverride;

- (id)init;
- (void).cxx_destruct;

@end

@class NSNumber;

@interface CHIPColorControlClusterStepColorTemperatureParams : NSObject

@property (retain, nonatomic) NSNumber *stepMode;
@property (retain, nonatomic) NSNumber *stepSize;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSNumber *colorTemperatureMinimum;
@property (retain, nonatomic) NSNumber *colorTemperatureMaximum;
@property (retain, nonatomic) NSNumber *optionsMask;
@property (retain, nonatomic) NSNumber *optionsOverride;

- (id)init;
- (void).cxx_destruct;

@end

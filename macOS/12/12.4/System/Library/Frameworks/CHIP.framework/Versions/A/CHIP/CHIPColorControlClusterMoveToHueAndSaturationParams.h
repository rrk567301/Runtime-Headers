@class NSNumber;

@interface CHIPColorControlClusterMoveToHueAndSaturationParams : NSObject

@property (retain, nonatomic) NSNumber *hue;
@property (retain, nonatomic) NSNumber *saturation;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSNumber *optionsMask;
@property (retain, nonatomic) NSNumber *optionsOverride;

- (id)init;
- (void).cxx_destruct;

@end

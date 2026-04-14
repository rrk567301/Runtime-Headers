@class NSNumber;

@interface CHIPColorControlClusterMoveHueParams : NSObject

@property (retain, nonatomic) NSNumber *moveMode;
@property (retain, nonatomic) NSNumber *rate;
@property (retain, nonatomic) NSNumber *optionsMask;
@property (retain, nonatomic) NSNumber *optionsOverride;

- (id)init;
- (void).cxx_destruct;

@end

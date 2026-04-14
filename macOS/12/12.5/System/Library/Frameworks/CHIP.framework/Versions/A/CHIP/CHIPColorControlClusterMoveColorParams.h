@class NSNumber;

@interface CHIPColorControlClusterMoveColorParams : NSObject

@property (retain, nonatomic) NSNumber *rateX;
@property (retain, nonatomic) NSNumber *rateY;
@property (retain, nonatomic) NSNumber *optionsMask;
@property (retain, nonatomic) NSNumber *optionsOverride;

- (id)init;
- (void).cxx_destruct;

@end

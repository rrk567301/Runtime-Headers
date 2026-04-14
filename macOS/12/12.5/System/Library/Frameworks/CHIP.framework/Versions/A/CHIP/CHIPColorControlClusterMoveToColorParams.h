@class NSNumber;

@interface CHIPColorControlClusterMoveToColorParams : NSObject

@property (retain, nonatomic) NSNumber *colorX;
@property (retain, nonatomic) NSNumber *colorY;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSNumber *optionsMask;
@property (retain, nonatomic) NSNumber *optionsOverride;

- (id)init;
- (void).cxx_destruct;

@end

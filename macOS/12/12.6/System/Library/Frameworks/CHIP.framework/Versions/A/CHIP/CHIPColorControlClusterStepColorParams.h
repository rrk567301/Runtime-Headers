@class NSNumber;

@interface CHIPColorControlClusterStepColorParams : NSObject

@property (retain, nonatomic) NSNumber *stepX;
@property (retain, nonatomic) NSNumber *stepY;
@property (retain, nonatomic) NSNumber *transitionTime;
@property (retain, nonatomic) NSNumber *optionsMask;
@property (retain, nonatomic) NSNumber *optionsOverride;

- (id)init;
- (void).cxx_destruct;

@end

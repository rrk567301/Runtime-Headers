@class NSNumber;

@interface CHIPColorControlClusterColorLoopSetParams : NSObject

@property (retain, nonatomic) NSNumber *updateFlags;
@property (retain, nonatomic) NSNumber *action;
@property (retain, nonatomic) NSNumber *direction;
@property (retain, nonatomic) NSNumber *time;
@property (retain, nonatomic) NSNumber *startHue;
@property (retain, nonatomic) NSNumber *optionsMask;
@property (retain, nonatomic) NSNumber *optionsOverride;

- (id)init;
- (void).cxx_destruct;

@end

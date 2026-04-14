@interface PXProgressIndicatorAlertController : NSObject

@property (nonatomic) double delay;

+ (id)beginShowingModalProgressWithDelay:(double)a0;

- (void)stopShowing;

@end

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings

@property (nonatomic) BOOL allowSwipeDown;
@property (nonatomic) double minimumDimmingOpacity;
@property (retain, nonatomic) PXSwipeDownSettings *swipeDownSettings;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)setDefaultValues;
- (void)createChildren;
- (id)parentSettings;

@end

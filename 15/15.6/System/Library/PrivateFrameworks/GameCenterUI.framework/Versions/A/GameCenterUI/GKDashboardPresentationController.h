@interface GKDashboardPresentationController : NSObject

@property (nonatomic) char presenting;
@property (nonatomic) double transitionDuration;

+ (void)dismissViewController:(id)a0 animated:(char)a1;
+ (void)presentViewController:(id)a0 presentingViewController:(id)a1 animated:(char)a2;

- (id)init;

@end

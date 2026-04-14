@protocol PXNSSubjectTrackingViewActionDelegate;

@interface PXNSSubjectTrackingView : PXSubjectTrackingView

@property (weak, nonatomic) id<PXNSSubjectTrackingViewActionDelegate> actionDelegate;

- (void).cxx_destruct;
- (void)viewPressed:(id)a0;
- (id)initWithMediaView:(id)a0 cineController:(id)a1;
- (void)viewClicked:(id)a0;
- (BOOL)focusOnDetection:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 strong:(BOOL)a2;
- (long long)addFocusTrack:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 strong:(BOOL)a2;

@end

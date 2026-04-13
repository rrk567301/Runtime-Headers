@class NSSlider, NSButton;

@interface QCTrackBallUI : QCInspector {
    NSSlider *sensibilitySlider;
    NSButton *autorotationButton;
    NSSlider *inertiaSlider;
    NSSlider *frictionSlider;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)updateTracking:(id)a0;
- (void)updateAutorotation:(id)a0;

@end

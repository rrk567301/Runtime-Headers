@class QCInterpolationView, NSMatrix;

@interface QCInterpolationUI : QCInspector {
    NSMatrix *interpolationMatrix;
    QCInterpolationView *splineView;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)resetView;
- (void)updateInterpolation:(id)a0;

@end

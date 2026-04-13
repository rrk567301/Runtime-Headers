@class NSShadow;

@interface PXStoryMemoryFeedItemExtendedTraitCollection : PXStoryExtendedTraitCollection {
    double _viewportCornerRadius;
    NSShadow *_viewportShadow;
    long long _userInterfaceFeature;
}

- (void).cxx_destruct;
- (long long)userInterfaceFeature;
- (id)initWithSpecManager:(id)a0 initialReferenceSize:(struct CGSize { double x0; double x1; })a1;
- (double)viewportCornerRadius;
- (id)viewportShadow;

@end
